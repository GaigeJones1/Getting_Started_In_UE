// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDefinition.h"

UItemDefinition* UItemDefinition::CreateItemCopy() const
{
    // You can adjust this logic based on what you need.
    return DuplicateObject<UItemDefinition>(this, nullptr);
}

