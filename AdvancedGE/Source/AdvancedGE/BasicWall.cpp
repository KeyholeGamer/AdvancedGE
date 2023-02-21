// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicWall.h"

// Sets default values
ABasicWall::ABasicWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BlockWall = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockWall"));
	BlockWall->InitBoxExtent(FVector(50.f, 50.f, 50.f));
	BlockWall->SetCollisionResponseToAllChannels(ECR_Block);
	BlockWall->SetupAttachment(GetRootComponent());
	BlockWallMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockWallMesh"));
	
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("'/Game/Meshes/Cube.Cube'")); // Paste Mesh reference HERE

	if (Mesh.Succeeded())
	{
		BlockWallMeshComponent->SetStaticMesh(Mesh.Object);
	}

	BlockWallMaterialInstance = CreateDefaultSubobject<UMaterialInstanceDynamic>(TEXT("BlockWallMaterial"));
	static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("'/Game/Materials/MT_RocketWall.MT_RocketWall'")); // Paste Material reference HERE
	if (Material.Succeeded())
	{
		BlockWallMaterialInstance = UMaterialInstanceDynamic::Create(Material.Object, BlockWallMeshComponent);
	}
	BlockWallMeshComponent->SetMaterial(0, BlockWallMaterialInstance);

	BlockWallMeshComponent->SetupAttachment(GetRootComponent());

}

// Called when the game starts or when spawned
void ABasicWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasicWall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this && OtherActor->ActorHasTag(TEXT("Rocket")))
	{
		Destroy();
		OtherActor->Destroy();
	}
}
