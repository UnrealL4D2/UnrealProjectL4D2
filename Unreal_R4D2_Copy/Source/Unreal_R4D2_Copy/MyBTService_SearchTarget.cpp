// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTService_SearchTarget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MyAIController_Zombie.h"
#include "GameFramework/Character.h"
#include "DrawDebugHelpers.h"

UMyBTService_SearchTarget::UMyBTService_SearchTarget()
{
	NodeName = TEXT("SearchTarget");
	Interval = 1.0f;
}

void UMyBTService_SearchTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	auto CurrentPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (CurrentPawn == nullptr)
	{
		return;
	}

	UWorld* World = CurrentPawn->GetWorld();
	FVector Center = CurrentPawn->GetActorLocation();

	float SearchRadius = 500.f;

	if (World == nullptr)
	{
		return;
	}
	TArray<FOverlapResult> OverlapResults;
	FCollisionQueryParams QueryPrams(NAME_None, false, CurrentPawn);

	bool bResult = World->OverlapMultiByChannel(
		OverlapResults,
		Center,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel12,
		FCollisionShape::MakeSphere(SearchRadius),
		QueryPrams
	);

	if (bResult)
	{
		for (auto& OverlapResult : OverlapResults)
		{
			ACharacter* Character = Cast<ACharacter>(OverlapResult.GetActor());
			if (Character && Character->ActorHasTag(FName(TEXT("Player"))))
			{
				OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName(TEXT("Target")), Character);

				DrawDebugSphere(World, Center, SearchRadius, 16, FColor::Green, false, 0.2f);

				return;
			}
		}
	}
	else
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName(TEXT("Target")), nullptr);

		DrawDebugSphere(World, Center, SearchRadius, 16, FColor::Red, false, 0.2f);
	}
}
