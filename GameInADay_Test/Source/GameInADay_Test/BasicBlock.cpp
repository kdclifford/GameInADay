// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicBlock.h"

// Sets default values
ABasicBlock::ABasicBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block Mesh"));
	BlockMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABasicBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetActorLocation().Z < -100)
	{
		//RootComponent->ComponentVelocity = FVector(0, 0, 0);
		Destroy();
	}

}

