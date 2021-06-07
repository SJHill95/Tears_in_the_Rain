// Fill out your copyright notice in the Description page of Project Settings.

#include "MainAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PlayerCharacter.h"


// Called when the game starts or when spawned
void AMainAIController::BeginPlay()
{
	Super::BeginPlay();

	if (AIBehavior != nullptr)
	{
		RunBehaviorTree(AIBehavior);

		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

		APawn* EnemyPawn = GetPawn();

		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), EnemyPawn->GetActorLocation());
	}

}

// Called every frame
void AMainAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool AMainAIController::IsDead() const
{
	APlayerCharacter* ControlledCharacter = Cast<APlayerCharacter>(GetPawn());
	if (ControlledCharacter != nullptr)
	{
		return ControlledCharacter->IsDead();
	}

	return true;
}