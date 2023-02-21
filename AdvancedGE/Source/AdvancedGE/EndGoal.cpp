// Fill out your copyright notice in the Description page of Project Settings.


#include "EndGoal.h"
#include <AdvancedGE/FPSCharacter.h>

// Sets default values
AEndGoal::AEndGoal()
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
void AEndGoal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEndGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEndGoal::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	Volume->OnComponentBeginOverlap.AddDynamic(this, &AEndGoal::OnVolumeBeginOverlap);
	Volume->OnComponentEndOverlap.AddDynamic(this, &AEndGoal::OnVolumeEndOverlap);
}

void AEndGoal::OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<AFPSCharacter>(OtherActor))
	{
		AFPSCharacter* Car = Cast<AFPSCharacter>(OtherActor);

		Car->SwitchLevel();
	}
}

void AEndGoal::OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

