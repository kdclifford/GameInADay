// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WallAIController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEINADAY_TEST_API AWallAIController : public AAIController
{
	GENERATED_BODY()
public:
	virtual void Tick(float DeltaTime) override;
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;
protected:
	virtual void BeginPlay() override;
private:
	UPROPERTY()
		TArray<AActor*> Waypoints;
	AActor* ChooseWaypoint();
void RandomPatrol();
void MoveForward();

public:
	UPROPERTY(EditAnywhere)
		float MoveSpeed;
};
