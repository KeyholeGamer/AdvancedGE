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
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter."));

	level.Add("FPSMap");
	level.Add("Level1");
	level.Add("Level2");
	level.Add("Level3");
	
}

void AFPSCharacter::Landed(const FHitResult& Hit)
{
	DoubleJumpCounter = 0;
	DashCounter = 0;
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (OverHeatcount <= 0) 
	{
		OverHeating = false;
	}
	if (OverHeating == true) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Overheat."));
		/*OverHeatcount = OverHeatcount - 10;*/

		OverHeatcount -= 10 * DeltaTime;
	}

	if (OverHeatcount >= 100)
	{
		OverHeating = true;
	}
	if (JumpPower == true) {
		JumpHeight = 900.f;
	}
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
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::DoubleJump);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AFPSCharacter::Shoot);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AFPSCharacter::Reload);
	PlayerInputComponent->BindAction("AmmoSwap", IE_Pressed, this, &AFPSCharacter::BulletSwap);
	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &AFPSCharacter::Dash);
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
	BaseammoCount = 30;
}

void AFPSCharacter::Dash()
{
	if (DashCounter <= 1)
	{
		AFPSCharacter::LaunchCharacter(FVector(GetActorForwardVector() * 1000.f), false, true);
		DashCounter++;
	}


}

void AFPSCharacter::BulletSwap() 
{
	bulletType++;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT(""+bulletType));
	if (bulletType >= 4) 
	{
		bulletType = 1;
	}
}

void AFPSCharacter::Shoot()
{

	if (OverHeating == true)
	{

	}
	else
	{
		if (bulletType == 1)
		{

			if (BaseammoCount > 0)
			{
				OverHeatcount = OverHeatcount + 10;
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
							BaseammoCount--;
							GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT(""+bulletType));
						}
					}
				}
			}
		}
		else if (bulletType == 2)
		{
			if (RocketammoCount > 0)
			{
				OverHeatcount = OverHeatcount + 10;
				if (ProjectileClass1)
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
						ARocket* Projectile = World->SpawnActor<ARocket>(ProjectileClass1, MuzzleLocation, MuzzleRotation, SpawnParams);
						if (Projectile)
						{
							// Set the projectile's initial trajectory.
							FVector LaunchDirection = MuzzleRotation.Vector();
							Projectile->FireInDirection(LaunchDirection);
							RocketammoCount--;
						}
					}
				}
			}

		}
		else if (bulletType == 3)
		{
			if (BouncerammoCount > 0)
			{
				OverHeatcount = OverHeatcount + 10;
				if (ProjectileClass2)
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
						ABouncer* Projectile = World->SpawnActor<ABouncer>(ProjectileClass2, MuzzleLocation, MuzzleRotation, SpawnParams);
						if (Projectile)
						{
							// Set the projectile's initial trajectory.
							FVector LaunchDirection = MuzzleRotation.Vector();
							Projectile->FireInDirection(LaunchDirection);
							BouncerammoCount--;
						}
					}
				}
			}


		}
		//Attempt to shoot a projectile.
	}
		if (BouncerammoCount == 0 || RocketammoCount == 0 || BaseammoCount == 0) 
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("No ammo."));
		}
	
		
	
}

void AFPSCharacter::ReloadRocket()
{
	RocketammoCount = 10;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT(""));
}

void AFPSCharacter::ReloadBouncer() 
{
	BouncerammoCount = 10;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT(""));
}

void AFPSCharacter::JumpPowerUp()
{
	JumpPower = true;
}




void AFPSCharacter::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent)
{
	//if (OtherActor != this && OtherComponent->IsSimulatingPhysics())
	

		/*OtherComponent->AddImpulseAtLocation
		(ProjectileMovementComponent->Velocity * 100.0f, Hit.ImpactPoint);*/
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("RELOADED."));
		OtherActor->Destroy();
	

}

void AFPSCharacter::DoubleJump()
{
	if (DoubleJumpCounter <= 1) 
	{
		AFPSCharacter::LaunchCharacter(FVector(0,0, JumpHeight),false,true);
		DoubleJumpCounter++;
	}
}

void AFPSCharacter::SwitchLevel()
{
	FString current = GetWorld()->GetMapName();
	current.RemoveFromStart(GetWorld()->StreamingLevelsPrefix); //Removes Prefix from start in inspector

	for (int i = 0; i < level.Num(); i++ ) 
	{
		if (current == level[i]) 
		{
			if (i == level.Num() - 1) 
			{
				UGameplayStatics::OpenLevel(GetWorld(), FName(level[0]));
				break;
			}
			UGameplayStatics::OpenLevel(GetWorld(), FName(level[i+1]));
			break;
		}
	}
}

void AFPSCharacter::RestartCooling()
{
	OverHeatcount = 0;
	OverHeating = false;

}
	




