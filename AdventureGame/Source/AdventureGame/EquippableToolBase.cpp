// Copyright Epic Games, Inc. All Rights Reserved.


// Copyright Epic Games, Inc. All Rights Reserved.

#include "EquippableToolBase.h"
#include "AdventureCharacter.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


AEquippableToolBase::AEquippableToolBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create this tool's mesh component
	ToolMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ToolMesh"));
	check(ToolMeshComponent != nullptr);

}

// Called when the game starts or when spawned
void AEquippableToolBase::BeginPlay()
{
	Super::BeginPlay();

}

void AEquippableToolBase::Use()
{
}

void AEquippableToolBase::BindInputAction(const UInputAction* ActionToBind)
{
}

// Called every frame
void AEquippableToolBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
