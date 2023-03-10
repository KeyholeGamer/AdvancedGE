//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Pawn.h"
//#include "FPSTarget.generated.h"
//
//UCLASS()
//class ADVANCEDGE_API AFPSTarget : public APawn
//{
//	GENERATED_BODY()
//
//public:
//	// Sets default values for this pawn's properties
//	AFPSTarget();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	// Called to bind functionality to input
//	void PostInitializeComponents();
//
//	UFUNCTION()
//		void OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
//	UFUNCTION()
//		void OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
//	UPROPERTY(EditAnywhere, Category = "Ammo")
//		UBoxComponent* Volume;
//};
