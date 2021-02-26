// Fill out your copyright notice in the Description page of Project Settings.


#include "Moveable_Wall.h"
//#include "Component/UMeshComponent.h"
//#include "Components/BoxComponent.h"

// Sets default values
AMoveable_Wall::AMoveable_Wall()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("WallBase"));
	}
	 
	CubeOneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube One Mesh"));                                                                                                                                                                                                                                               
	CubeOneMesh->SetupAttachment(RootComponent);
	CubeOneMesh->SetWorldScale3D(FVector(8, 0.2f, 4));

	//CubeOneCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Cube Two Mesh"));
	//CubeOneCollision->SetupAttachment(RootComponent);
	//CubeOneCollision->SetWorldScale3D(FVector(8, 0.2f, 4));


	CubeTwoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Two Mesh"));
	CubeTwoMesh->SetupAttachment(RootComponent);
	CubeTwoMesh->SetWorldScale3D(FVector(8, 0.2f, 4));

	//CubeTwoCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Cube Two Mesh"));
	//CubeTwoCollision->SetupAttachment(RootComponent);
	//CubeTwoCollision->SetWorldScale3D(FVector(8, 0.2f, 4));
}

// Called when the game starts or when spawned
void AMoveable_Wall::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMoveable_Wall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMoveable_Wall::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

