// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAIController.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

AZombieAIController::AZombieAIController()
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree>BT(TEXT("BehaviorTree'/Game/Maps/AI/BT_Zombie.BT_Zombie'"));
	if (BT.Succeeded())
	{
		BehaviorTree = BT.Object;
	}
	static ConstructorHelpers::FObjectFinder<UBlackboardData>BD(TEXT("BlackboardData'/Game/Maps/AI/BB_Zombie.BB_Zombie'"));
	if (BD.Succeeded())
	{
		BlackboardData = BD.Object;
	}


}

void AZombieAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

}

void AZombieAIController::OnUnPossess()
{
	Super::OnUnPossess();
}

