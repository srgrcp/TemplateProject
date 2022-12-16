// Copyright Epic Games, Inc. All Rights Reserved.

#include "TemplateProjectGameMode.h"
#include "TemplateProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATemplateProjectGameMode::ATemplateProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
