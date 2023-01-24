// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AdvancedGEGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDGE_API AAdvancedGEGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void StartPlay() override;

	
};
