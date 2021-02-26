// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MoveFloor.generated.h"

UCLASS()
class GAMEINADAY_TEST_API AMoveFloor : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMoveFloor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* FloorMesh;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AMoveable_Wall> wall;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ABasicBlock> OBlock;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ABasicBlock> TBlock;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ABasicBlock> LBlock;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ABasicBlock> SBlock;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ABasicBlock> ZBlock;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ABasicBlock> LReverseBlock;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ABasicBlock> IBlock;

	private:
		UPROPERTY(EditAnywhere)
			FVector FloorPos;
		UPROPERTY(EditAnywhere)
			float Round = 1;
		UPROPERTY()
			float Timer = 2;
		UPROPERTY()
			float StartTime = 2;
	/*	UPROPERTY()
			float FloorSpeed = 1;*/
		UPROPERTY()
			AMoveable_Wall* tempWall;
		/*UPROPERTY(EditAnywhere)
		TArray<AActor*> SpawnedBlocks;*/
		void SpawnWall();
		void SpawnBlocks();

public:
	UPROPERTY(EditAnywhere)
		float MoveSpeed;
};


UENUM()
enum EBlockType
{
	O = 0,
	T,
	L,
	ReverseL,
	I,
	S,
	Z,
	AmountOfBlocks,
};