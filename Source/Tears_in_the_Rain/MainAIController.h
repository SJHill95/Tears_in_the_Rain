// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MainAIController.generated.h"

/**
 * 
 */
UCLASS()
class TEARS_IN_THE_RAIN_API AMainAIController : public AAIController
{
	GENERATED_BODY()

public: 

	virtual void Tick(float DeltaSeconds) override;
	bool IsDead() const;

protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;
	
};
