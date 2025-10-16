// Copyright Epic Games, Inc. All Rights Reserved.

#include "DartLauncher.h"
#include "Kismet/KismetMathLibrary.h"
#include "AdventureGame/AdventureCharacter.h"

void ADartLauncher::Use()
{

	UWorld* const World = GetWorld();

	if (World != nullptr && ProjectileClass != nullptr)
	{
		FVector TargetPosition = OwningCharacter->GetCameraTargetLocation();

		// Get the correct socket to spawn the projectile from
		FVector SocketLocation = ToolMeshComponent->GetSocketLocation("Muzzle");
		FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SocketLocation, TargetPosition);
		FVector SpawnLocation = SocketLocation + UKismetMathLibrary::GetForwardVector(SpawnRotation) * 10.0;

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		// Spawn the projectile at the muzzle
		World->SpawnActor<AFirstPersonProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

	}


}

// Called every frame
void ADartLauncher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADartLauncher::BindInputAction(const UInputAction* InputToBind)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Attempting to bind DartLauncher Use to character"));

	// Set up action bindings
	if (APlayerController* PlayerController = Cast<APlayerController>(OwningCharacter->GetController()))
	{


		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			// Fire
			EnhancedInputComponent->BindAction(InputToBind, ETriggerEvent::Triggered, this, &ADartLauncher::Use);
		}
	}
}
