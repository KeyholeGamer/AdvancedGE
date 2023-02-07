// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "BasicWall.generated.h"

UCLASS()
class ADVANCEDGE_API ABasicWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(VisibleDefaultsOnly, Category = "Rocket Wall")
		UStaticMeshComponent* BlockWallMeshComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Rocket Wall")
		UMaterialInstanceDynamic* BlockWallMaterialInstance;

	UPROPERTY(EditAnywhere, Category = "Rocket Wall")
		UBoxComponent* BlockWall;


};
