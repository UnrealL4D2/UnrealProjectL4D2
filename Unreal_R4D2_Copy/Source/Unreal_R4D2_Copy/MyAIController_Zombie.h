// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyAIController_Zombie.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_R4D2_COPY_API AMyAIController_Zombie : public AAIController
{
	GENERATED_BODY()
public:

	AMyAIController_Zombie();

	virtual void OnPossess(APawn* InPawn)override;
	virtual void OnUnPossess() override;



private:
	FTimerHandle TimerHandle;

	UPROPERTY()
	class UBehaviorTree* BehaviorTree;

	UPROPERTY()
	class UBlackboardData* BlackboardData;

};
