// Copyright Epic Games, Inc. All Rights Reserved.

#include "IncorruptibleGameMode.h"
#include "IncorruptibleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIncorruptibleGameMode::AIncorruptibleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
