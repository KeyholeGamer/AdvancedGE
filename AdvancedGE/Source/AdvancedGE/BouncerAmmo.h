// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "BouncerAmmo.generated.h"

UCLASS()
class ADVANCEDGE_API ABouncerAmmo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABouncerAmmo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PostInitializeComponents();

	UFUNCTION()
		void OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere, Category = "RocketAmmo")
		UBoxComponent* Volume;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* SuperMesh;
};
