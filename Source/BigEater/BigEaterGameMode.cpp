// Copyright Epic Games, Inc. All Rights Reserved.

#include "BigEaterGameMode.h"
#include "BigEaterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABigEaterGameMode::ABigEaterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
