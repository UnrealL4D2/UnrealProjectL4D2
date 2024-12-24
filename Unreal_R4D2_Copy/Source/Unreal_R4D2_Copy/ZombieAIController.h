// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ZombieAIController.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_R4D2_COPY_API AZombieAIController : public AAIController
{
	GENERATED_BODY()
public:

	AZombieAIController();

	virtual void OnPossess(APawn* InPawn) override; // 빙의가 시작했을 때
	virtual void OnUnPossess() override; // 빙의가 끝났을 때

private:

	class UBehaviorTree* BehaviorTree;

	class UBlackboardData* BlackboardData;
};
