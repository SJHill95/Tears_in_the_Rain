// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tears_in_the_RainGameModeBase.h"
#include "KillAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TEARS_IN_THE_RAIN_API AKillAllGameMode : public ATears_in_the_RainGameModeBase
{
	GENERATED_BODY()

public:

	virtual void PawnKilled(APawn* PawnKilled) override;

private:

	void EndGame(bool bIsPlayerWinner);
	
};
