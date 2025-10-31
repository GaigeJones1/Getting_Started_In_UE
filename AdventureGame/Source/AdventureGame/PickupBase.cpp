// Copyright Epic Games, Inc. All Rights Reserved.

#include "PickupBase.h"
#include "ItemDefinition.h"
#include "EquippableToolDefinition.h" // ✅ Needed for UEquippableToolDefinition
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "AdventureCharacter.h"

// Sets default values
APickupBase::APickupBase()
{
    PrimaryActorTick.bCanEverTick = true;

    // ---- Sphere Component Setup ----
    SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    SetRootComponent(SphereComponent);
    SphereComponent->InitSphereRadius(32.f);

    // Enable overlap-only collision for pawn detection
    SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
    SphereComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

    // ---- Mesh Component Setup ----
    PickupMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
    PickupMeshComponent->SetupAttachment(SphereComponent);
    PickupMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    PickupMeshComponent->SetVisibility(true);

    // ---- Respawn & Cooldown Settings ----
    bShouldRespawn = false;     // Optional: respawn after delay
    RespawnTime = 10.0f;        // Respawn delay in seconds
    bCanBePickedUp = true;      // ✅ New: Cooldown control flag
    PickupCooldown = 1.0f;      // ✅ Cooldown duration before pickup can be triggered again
}

// Called when the game starts or when spawned
void APickupBase::BeginPlay()
{
    Super::BeginPlay();

    // Bind overlap event once here so it always works
    SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &APickupBase::OnSphereBeginOverlap);

    // Initialize item visuals and data
    InitializePickup();
}

// Called every frame
void APickupBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

/**
 * Initializes the pickup with default values by retrieving them from the associated data table.
 */
void APickupBase::InitializePickup()
{
    // Make sure we have valid data before doing anything
    if (PickupDataTable && !PickupItemID.IsNone())
    {
        const FItemData* ItemDataRow = PickupDataTable->FindRow<FItemData>(PickupItemID, PickupItemID.ToString());
        if (!ItemDataRow)
        {
            UE_LOG(LogTemp, Warning, TEXT("Invalid ItemDataRow for Pickup ID: %s"), *PickupItemID.ToString());
            return;
        }

        // ✅ Create the correct subclass based on ItemBase type
        if (ItemDataRow->ItemBase && ItemDataRow->ItemBase->IsA(UEquippableToolDefinition::StaticClass()))
        {
            // If it's a tool, create a proper tool definition
            ReferenceItem = NewObject<UEquippableToolDefinition>(this, ItemDataRow->ItemBase->GetClass());
        }
        else
        {
            // Otherwise, create a normal item definition
            ReferenceItem = NewObject<UItemDefinition>(this, ItemDataRow->ItemBase->GetClass());
        }

        // Copy data over
        ReferenceItem->ID = ItemDataRow->ID;
        ReferenceItem->ItemType = ItemDataRow->ItemType;
        ReferenceItem->ItemText = ItemDataRow->ItemText;
        ReferenceItem->WorldMesh = ItemDataRow->ItemBase->WorldMesh;

        UItemDefinition* TempItemDefinition = ItemDataRow->ItemBase.Get();

        // Ensure the mesh is valid or load it
        if (TempItemDefinition && TempItemDefinition->WorldMesh.IsValid())
        {
            PickupMeshComponent->SetStaticMesh(TempItemDefinition->WorldMesh.Get());
        }
        else if (TempItemDefinition)
        {
            UStaticMesh* WorldMesh = TempItemDefinition->WorldMesh.LoadSynchronous();
            PickupMeshComponent->SetStaticMesh(WorldMesh);
        }

        // Reset visibility and collision when respawning
        PickupMeshComponent->SetVisibility(true);
        SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

        // Reset pickup availability
        bCanBePickedUp = true;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Pickup not initialized properly: Missing DataTable or ItemID."));
    }
}

/**
 * Called when something overlaps this pickup's SphereComponent.
 */
void APickupBase::OnSphereBeginOverlap(
    UPrimitiveComponent* OverlappedComponent,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult)
{
    // ✅ Prevent immediate re-pickup using cooldown flag
    if (!bCanBePickedUp)
        return;

    AAdventureCharacter* Character = Cast<AAdventureCharacter>(OtherActor);
    if (Character && ReferenceItem)
    {
        // 🔇 Removed "Pickup overlapped with character!" message — everything works now!

        // Give the item to the player (spawns + attaches the tool)
        Character->GiveItem(ReferenceItem);

        // Hide the pickup from the world
        PickupMeshComponent->SetVisibility(false);
        PickupMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

        // Set cooldown so the player can't pick it up again instantly
        bCanBePickedUp = false;
        GetWorldTimerManager().SetTimer(CooldownTimerHandle, this, &APickupBase::ResetPickupCooldown, PickupCooldown, false);

        // Respawn if enabled
        if (bShouldRespawn)
        {
            GetWorldTimerManager().SetTimer(RespawnTimerHandle, this, &APickupBase::InitializePickup, RespawnTime, false);
        }
    }
}

/**
 * Resets the pickup’s cooldown state.
 */
void APickupBase::ResetPickupCooldown()
{
    bCanBePickedUp = true;
}

/**
 * Called when a property is changed in the editor.
 */
void APickupBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    const FName ChangedPropertyName = PropertyChangedEvent.Property
        ? PropertyChangedEvent.Property->GetFName()
        : NAME_None;

    if (ChangedPropertyName == GET_MEMBER_NAME_CHECKED(APickupBase, PickupItemID) && PickupDataTable)
    {
        if (const FItemData* ItemDataRow = PickupDataTable->FindRow<FItemData>(PickupItemID, PickupItemID.ToString()))
        {
            if (ItemDataRow->ItemBase)
            {
                UItemDefinition* TempItemDefinition = ItemDataRow->ItemBase;
                PickupMeshComponent->SetStaticMesh(TempItemDefinition->WorldMesh.Get());
                SphereComponent->SetSphereRadius(32.f);
            }
        }
    }
}