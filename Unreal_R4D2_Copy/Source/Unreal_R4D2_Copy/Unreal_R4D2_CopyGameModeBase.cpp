// Copyright Epic Games, Inc. All Rights Reserved.


#include "Unreal_R4D2_CopyGameModeBase.h"

AUnreal_R4D2_CopyGameModeBase::AUnreal_R4D2_CopyGameModeBase() {

	static ConstructorHelpers::FClassFinder<APawn>BP_Char(TEXT("Blueprint'/Game/Resource/Character/Military/Blueprints/FirstPersonCharacter1.FirstPersonCharacter1_C'"));

	if (BP_Char.Succeeded())
	{
		DefaultPawnClass = BP_Char.Class;
	}
}