// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Tears_in_the_RainGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TEARS_IN_THE_RAIN_API ATears_in_the_RainGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	virtual void PawnKilled(APawn* PawnKilled);
	
};
