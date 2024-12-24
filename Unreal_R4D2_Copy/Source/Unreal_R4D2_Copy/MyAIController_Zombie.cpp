// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController_Zombie.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"


AMyAIController_Zombie::AMyAIController_Zombie()
{
    static ConstructorHelpers::FObjectFinder<UBehaviorTree>
        BT(TEXT("BehaviorTree'/Game/AI/BB_Zombie.BB_Zombie'"));
    if (BT.Succeeded())
    {
        BehaviorTree = BT.Object;
    }

    static ConstructorHelpers::FObjectFinder<UBlackboardData>
        BD(TEXT("BlackboardData'/Game/AI/BD_Zombie.BD_Zombie'"));
    if (BD.Succeeded())
    {
        BlackboardData = BD.Object;
    }
}

void AMyAIController_Zombie::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

}

void AMyAIController_Zombie::OnUnPossess()
{
    Super::OnUnPossess();

}
