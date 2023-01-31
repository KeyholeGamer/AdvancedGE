// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"



// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter."));

}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	// Set up "movement" bindings.
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	// Set up "look" bindings.
	PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);

	// Set up "action" bindings.
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::Jump);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AFPSCharacter::Shoot);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AFPSCharacter::Reload);
}

void AFPSCharacter::MoveForward(float Value)
{
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::MoveRight(float Value)
{
	// Find out which way is "right" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AFPSCharacter::Reload()
{
	ammoCount = 10;
}

void AFPSCharacter::Shoot()
{
	if (ammoCount > 0) 
	{
		//Attempt to shoot a projectile.
		if (ProjectileClass)
		{
			// Get the camera transform.
			FVector CameraLocation;
			FRotator CameraRotation;
			GetActorEyesViewPoint(CameraLocation, CameraRotation);

			// Set MuzzleOffset to spawn projectiles slightly in front of the camera.
			MuzzleOffset.Set(100.0f, 0.0f, 0.0f);

			// Transform MuzzleOffset from camera space to world space.
			FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

			// Skew the aim to be slightly upwards.
			FRotator MuzzleRotation = CameraRotation;
			MuzzleRotation.Pitch += 10.0f;

			UWorld* World = GetWorld();
			if (World)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = GetInstigator();

				// Spawn the projectile at the muzzle.
				AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
				if (Projectile)
				{
					// Set the projectile's initial trajectory.
					FVector LaunchDirection = MuzzleRotation.Vector();
					Projectile->FireInDirection(LaunchDirection);
					ammoCount--;
				}
			}
		}
	}
	if (ammoCount == 0) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No ammo."));
	}
}

//void AFPSCharacter::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	/*if (OtherActor->ActorHasTag(TEXT("Ammo")))
//	{
//		ammoCount = 10;
//		OtherActor->Destroy();
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, ""+ammoCount);
//	}*/
//	UE_LOG(LogTemp, Warning, TEXT("CollisonTest"));
//
//}
//
//void AFPSCharacter::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
//{
//	if (OtherActor->ActorHasTag(TEXT("Ammo")))
//	{
//		ammoCount = 10;
//		OtherActor->Destroy();
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "" + ammoCount);
//	}
//}
void AFPSCharacter::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent)
{
	//if (OtherActor != this && OtherComponent->IsSimulatingPhysics())
	

		/*OtherComponent->AddImpulseAtLocation
		(ProjectileMovementComponent->Velocity * 100.0f, Hit.ImpactPoint);*/
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("RELOADED."));
		OtherActor->Destroy();
	

}


