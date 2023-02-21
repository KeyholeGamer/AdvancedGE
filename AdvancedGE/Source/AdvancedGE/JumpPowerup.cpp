// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpPowerup.h"
#include <AdvancedGE/FPSCharacter.h>

// Sets default values
AJumpPowerup::AJumpPowerup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Volume = CreateDefaultSubobject<UBoxComponent>(TEXT("Volume"));
	Volume->InitBoxExtent(FVector(10.f, 40.f, 50.f));
	Volume->SetCollisionResponseToAllChannels(ECR_Overlap);
	Volume->SetupAttachment(GetRootComponent());

	SuperMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Super Mesh"));

}

// Called when the game starts or when spawned
void AJumpPowerup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJumpPowerup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJumpPowerup::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	Volume->OnComponentBeginOverlap.AddDynamic(this, &AJumpPowerup::OnVolumeBeginOverlap);
	Volume->OnComponentEndOverlap.AddDynamic(this, &AJumpPowerup::OnVolumeEndOverlap);
}

void AJumpPowerup::OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<AFPSCharacter>(OtherActor))
	{
		AFPSCharacter* Car = Cast<AFPSCharacter>(OtherActor);

		Car->JumpPowerUp();
	}
}

void AJumpPowerup::OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

