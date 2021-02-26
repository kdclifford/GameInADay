// Fill out your copyright notice in the Description page of Project Settings.


#include "WallAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TargetPoint.h"
//#include "GameFramework/Actor.h"


void AWallAIController::BeginPlay() {
	Super::BeginPlay();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);

	//RandomPatrol();
}

void AWallAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveForward();
}

AActor* AWallAIController::ChooseWaypoint()
{
	int index = FMath::RandRange(0, Waypoints.Num() - 1);
	return Waypoints[index];
}

void AWallAIController::RandomPatrol()
{

	//setactorlocation = FVector(10 * GetWorld()->DeltaTimeSeconds, 0.0f, 0.0f);
}

void AWallAIController::MoveForward()
{
	AActor* AIPawn = GetPawn();
	AIPawn->SetActorLocation(AIPawn->GetActorLocation() + FVector(-MoveSpeed * GetWorld()->DeltaTimeSeconds, 0.0f, 0.0f));
	//ai
	//GetMesh()->AddImpulseAtLocation(FVector(-100 * GetWorld()->DeltaTimeSeconds, GetActorLocation());
}

void AWallAIController::OnMoveCompleted(FAIRequestID RequestID, const
	FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);
	//RandomPatrol();
}