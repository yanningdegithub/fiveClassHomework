// Copyright Epic Games, Inc. All Rights Reserved.

#include "animationGameMode.h"
#include "animationCharacter.h"
#include "UObject/ConstructorHelpers.h"

AanimationGameMode::AanimationGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
