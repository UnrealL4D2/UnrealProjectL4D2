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

	virtual void OnPossess(APawn* InPawn) override; // ���ǰ� �������� ��
	virtual void OnUnPossess() override; // ���ǰ� ������ ��

private:

	class UBehaviorTree* BehaviorTree;

	class UBlackboardData* BlackboardData;
};
