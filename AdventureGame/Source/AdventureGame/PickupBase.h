// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "ItemDefinition.h"
#include "PickupBase.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class ADVENTUREGAME_API APickupBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APickupBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Initializes pickup visuals and data
	void InitializePickup();

	// Called when a property is changed in the editor
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	// Called when something overlaps this pickup's sphere
	UFUNCTION()
	void OnSphereBeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

protected:
	/** Collision sphere for detecting player overlap */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup Components")
	TObjectPtr<USphereComponent> SphereComponent;

	/** The visible mesh of the pickup */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup Components")
	TObjectPtr<UStaticMeshComponent> PickupMeshComponent;

	/** DataTable that defines the pickup’s item info */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup Data")
	TObjectPtr<UDataTable> PickupDataTable;

	/** The row name from the DataTable to use */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup Data")
	FName PickupItemID;

	/** The actual item this pickup represents */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup Data")
	TObjectPtr<UItemDefinition> ReferenceItem;

	/** Should the pickup respawn after being collected? */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup Respawn")
	bool bShouldRespawn;

	/** Time (in seconds) before the pickup respawns */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup Respawn", meta = (EditCondition = "bShouldRespawn"))
	float RespawnTime;

	/** Respawn timer handle */
	FTimerHandle RespawnTimerHandle;

	// =====================================================
	// ✅ NEW COOLDOWN SYSTEM
	// =====================================================

	/** Whether the pickup can currently be collected */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup Cooldown")
	bool bCanBePickedUp;

	/** Cooldown duration (seconds) before pickup can trigger again */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup Cooldown")
	float PickupCooldown;

	/** Timer handle to reset pickup availability */
	FTimerHandle CooldownTimerHandle;

	/** Function to reset the pickup’s cooldown state */
	UFUNCTION()
	void ResetPickupCooldown();
};