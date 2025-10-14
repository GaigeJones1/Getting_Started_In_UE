// Copyright Epic Games, Inc. All Rights Reserved.

#include "EquippableToolDefinition.h"

UEquippableToolDefinition* UEquippableToolDefinition::CreateItemCopy() const
{
	UEquippableToolDefinition* ItemCopy = NewObject<UEquippableToolDefinition>(StaticClass());

	ItemCopy->ID = this->ID;
	ItemCopy->ItemType = this->ItemType;
	ItemCopy->ItemText = this->ItemText;
	ItemCopy->WorldMesh = this->WorldMesh;
	ItemCopy->ToolAsset = this->ToolAsset;

	return ItemCopy;
}
