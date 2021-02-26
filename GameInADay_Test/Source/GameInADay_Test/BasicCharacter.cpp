// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicCharacter.h"

// Sets default values
ABasicCharacter::ABasicCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABasicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &ABasicCharacter::MoveForwards);
	PlayerInputComponent->BindAxis(TEXT("Strafe"), this, &ABasicCharacter::Strafe);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ABasicCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ABasicCharacter::Turn);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ABasicCharacter::Fire);

}

void ABasicCharacter::MoveForwards(float AxisAmount)
{
	AddMovementInput(GetActorForwardVector() * AxisAmount);
}

void ABasicCharacter::Strafe(float AxisAmount)
{
	AddMovementInput(GetActorRightVector() * AxisAmount);
}

void ABasicCharacter::LookUp(float AxisAmount)
{
	AddControllerPitchInput(AxisAmount * cameraSenitvity);
}

void ABasicCharacter::Turn(float AxisAmount)
{
	AddControllerYawInput(AxisAmount * cameraSenitvity);
}

void ABasicCharacter::Fire()
{
	AController* ControllerRef = GetController();
	FVector Position;
	FRotator Rotiation;
	ControllerRef->GetPlayerViewPoint(Position, Rotiation);

	float CastRange = 10000.0f;
	FVector End = Position + Rotiation.Vector() * CastRange;

	FHitResult Hit;
	bool IsHit = GetWorld()->LineTraceSingleByChannel(Hit, Position, End, ECC_Visibility);

	if (IsHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("List %s"), *Hit.GetActor()->GetName());
	
		UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>( Hit.GetActor()->GetRootComponent());

		if (RootComp)
		{
			RootComp->AddImpulse(Rotiation.Vector() * Impulse * RootComp->GetMass());
		}

	}
}