// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AdventureGame/EquippableToolBase.h"
#include "AdventureGame/FirstPersonProjectile.h"
#include "DartLauncher.generated.h"

class AFirstPersonProjectile;

/**
 *
 */
UCLASS(BlueprintType, Blueprintable)
class ADVENTUREGAME_API ADartLauncher : public AEquippableToolBase
{
	GENERATED_BODY()

public:

	virtual void Use() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BindInputAction(const UInputAction* InputToBind) override;

	// Projectile class to spawn
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<AFirstPersonProjectile> ProjectileClass;

};