// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveFloor.h"
#include "Moveable_Wall.h"
#include "BasicBlock.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"

// Sets default values
AMoveFloor::AMoveFloor()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("FloorBase"));
	}

	FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor Mesh"));
	FloorMesh->SetupAttachment(RootComponent);
	FloorMesh->SetWorldScale3D(FVector(3.75, 0.75f, 1));
}

// Called when the game starts or when spawned
void AMoveFloor::BeginPlay()
{
	Super::BeginPlay();
	FloorPos = GetActorLocation();
	SpawnWall();
	SpawnBlocks();
	//SpawnedBlocks
	//GetAllActorsOfClass();
}

// Called every frame
void AMoveFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation().Z > FloorPos.Z - 5)
	{
		if (FVector::Distance(GetActorLocation(), FloorPos) > 3800)
		{
			if (Timer < 0)
			{
				FloorPos = GetActorLocation();
				
				//SpawnedBlocks.Empty();
				Round++;
				tempWall->SetActorLocation(FVector(FloorPos.X - 2000, FMath::RandRange(-400.0f, 400.0f), 220));
				//tempWall->SetActorScale3D(FVector(1 - (Round * 0.1f), 1, 1));
				

				if ((8 + (Round * 0.2f) >= 9.2f))
				{
					//aa* hi = Cast<AAIController>(GetController());
					MoveSpeed += MoveSpeed * 0.1f;
					
				}
				else
				{
				tempWall->CubeOneMesh->SetRelativeScale3D(FVector(8 + (Round * 0.2f), 0.2f, 4));
				tempWall->CubeTwoMesh->SetRelativeScale3D(FVector(8 + (Round * 0.2f), 0.2f, 4));
				}

				GetWorld()->GetFirstPlayerController()->GetPawn()->SetActorLocation(FVector(FloorPos.X + 1600, FloorPos.Y, FloorPos.Z + 50));
				SpawnBlocks();
				Timer = StartTime;
			}
			Timer -= DeltaTime;

		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Round %i"), Round);
	//if (!wall)
	//{
	//	SpawnWall();
	//}
	SetActorLocation(GetActorLocation() + FVector(-MoveSpeed * GetWorld()->DeltaTimeSeconds, 0.0f, 0.0f));
}

// Called to bind functionality to input
void AMoveFloor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMoveFloor::SpawnWall()
{
	if (wall)
	{
		//FActorSpawnParameters spawnParams;
		//UE_LOG(LogTemp, Warning, TEXT("Spawned"));
		FRotator rotation = FRotator(0, 90, 0);

		FVector position = FVector(-1900, FMath::RandRange(-400.0f, 400.0f), 220);

		//world->SpawnActor<AMoveable_Wall>(wall, position, rotation, spawnParams);
		tempWall = GetWorld()->SpawnActor<AMoveable_Wall>(wall, position, rotation);
	}
}

void AMoveFloor::SpawnBlocks()
{
	FVector location = GetActorLocation();

	//ABasicBlock* blockTemp;
	int blockAmount = 10;
	blockAmount = blockAmount + (blockAmount * (Round * 0.2f));

	//for (int i = 0; i < SpawnedBlocks.Num(); i++)
	//{
	//	//SpawnedBlocks[0][i]->SetActorEnableCollision
	//	//SpawnedBlocks[i]->GetRootComponent()->SetWorldLocation(location + FVector(FMath::RandRange(-1900.0f, 1200.0f), FMath::RandRange(-400.0f, 400.0f), 200));
	//	SpawnedBlocks[i]->SetActorLocation(location + FVector(FMath::RandRange(-1900.0f, 1200.0f), FMath::RandRange(-400.0f, 400.0f), 200));
	//}

	//if (SpawnedBlocks.Num() == 0)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("List is 0"));
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("List %i"), SpawnedBlocks.Num());
	//}

	for (int i = 0; i < blockAmount; i++)
	{
		int rand = FMath::RandRange(0, AmountOfBlocks);
		location = GetActorLocation() + FVector(FMath::RandRange(-1900.0f, 1200.0f), FMath::RandRange(-400.0f, 400.0f), 200);
		
		switch (rand)
		{
		case O:
			
			GetWorld()->SpawnActor<ABasicBlock>(OBlock, location, FRotator(0, 0, 0));
			break;
		case T:
			GetWorld()->SpawnActor<ABasicBlock>(TBlock, location, FRotator(0, 0, 0));
			break;
		case L:
			GetWorld()->SpawnActor<ABasicBlock>(LBlock, location, FRotator(0, 0, 0));
			break;
		case ReverseL:
			GetWorld()->SpawnActor<ABasicBlock>(LReverseBlock, location, FRotator(0, 0, 0));
			break;
		case I:			
			GetWorld()->SpawnActor<ABasicBlock>(IBlock, location, FRotator(0, 0, 0));
			break;
		case S:			
			GetWorld()->SpawnActor<ABasicBlock>(SBlock, location, FRotator(0, 0, 0));
			break;
		case Z:			
			GetWorld()->SpawnActor<ABasicBlock>(ZBlock, location, FRotator(0, 0, 0));
			break;
		}
	}

	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasicBlock::StaticClass(), SpawnedBlocks);

}

