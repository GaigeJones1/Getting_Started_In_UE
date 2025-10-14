// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EquippableToolBase.generated.h"

class AAdventureCharacter;
class UInputAction;


UCLASS(BlueprintType, Blueprintable)
class ADVENTUREGAME_API AEquippableToolBase : public AActor
{
	GENERATED_BODY()

public:
	/** Sets default values for this component's properties */
	AEquippableToolBase();

	// First Person animations
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UAnimBlueprint> FirstPersonToolAnim;

	// Third Person animations
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UAnimBlueprint> ThirdPersonToolAnim;

	// The input mapping context associated with this tool
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UInputMappingContext> ToolMappingContext;

	// Tool Skeletal Mesh
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<USkeletalMeshComponent> ToolMeshComponent;

	// The character holding this tool
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<AAdventureCharacter> OwningCharacter;

	// First Person animations
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float UseCooldown;

	// Use the tool
	UFUNCTION()
	virtual void Use();

	// Binds the Use function to the owning character
	UFUNCTION()
	virtual void BindInputAction(const UInputAction* ActionToBind);

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
