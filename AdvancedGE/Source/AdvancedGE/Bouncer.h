// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Bouncer.generated.h"

UCLASS()
class ADVANCEDGE_API ABouncer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABouncer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	// Sphere collision component.
	UPROPERTY(VisibleDefaultsOnly, Category = "Projectile")
		USphereComponent* CollisionComponent;

	//Sphere mesh
	UPROPERTY(VisibleDefaultsOnly, Category = "Projectile")
		UStaticMeshComponent* ProjectileMeshComponent;

	// The Objects Movement abilty.
	UPROPERTY(VisibleAnywhere, Category = "Movement")
		UProjectileMovementComponent* ProjectileMovementComponent;

	// The Shoot's material 
	UPROPERTY(VisibleDefaultsOnly, Category = "Movement")
		UMaterialInstanceDynamic* ProjectileMaterialInstance;

	//Controls and sets Direction 
	void FireInDirection(const FVector& ShootDirection);

};
