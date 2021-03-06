// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GoKartMovementComponent.h"
#include "MovementReplicationComponent.h"
#include "GoKart.generated.h"

UCLASS()
class KRAZY_KARTS_API AGoKart : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGoKart();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;		

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
private:	
	void MoveForward(float Val);
	void MoveRight(float Val);	

	UPROPERTY(VisibleAnywhere)
	UGoKartMovementComponent* MovementComponent = nullptr;

	UPROPERTY(VisibleAnywhere)
	UMovementReplicationComponent* ReplicationComponent = nullptr;
};
