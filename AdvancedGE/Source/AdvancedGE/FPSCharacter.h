// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Rocket.h"
#include "Bouncer.h"
#include "FPSProjectile.h"
#include "FPSCharacter.generated.h"

UCLASS()
class ADVANCEDGE_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Landed(const FHitResult& Hit)override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	int BaseammoCount = 30;

	int RocketammoCount = 10;

	int BouncerammoCount = 10;

	int bulletType = 1;

	float JumpHeight = 600.f;

	bool JumpPower;

	float OverHeatcount = 0;
	bool OverHeating = false;

	void MoveForward(float Value);

	void MoveRight(float Value);

	void Reload();

	void Dash();

	void BulletSwap();

	void Shoot();

	void ReloadRocket();

	void ReloadBouncer();

	void JumpPowerUp();

	// FPS camera
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;

	// First-person mesh (arms), visible only to the owning player.
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPSMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzzleOffset;

	//Projectile class to spawn.
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AFPSProjectile> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class ARocket> ProjectileClass1;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ABouncer> ProjectileClass2;

	
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent);

	UFUNCTION()
		void DoubleJump();
	UPROPERTY()
		int DoubleJumpCounter;

	int DashCounter;

	void SwitchLevel();

	TArray<FString> level;

	virtual void RestartCooling();

};
