// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ItemDefinition.h"
#include "EquippableToolDefinition.generated.h"

class AEquippableToolBase;
class UInputMappingContext;

UCLASS(BlueprintType, Blueprintable)
class ADVENTUREGAME_API UEquippableToolDefinition : public UItemDefinition
{
	GENERATED_BODY()

public:

	// The tool asset associated with this item
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AEquippableToolBase> ToolAsset;

	// Create and return a copy of this item
	UFUNCTION()

	virtual UEquippableToolDefinition* CreateItemCopy() const override;
};
