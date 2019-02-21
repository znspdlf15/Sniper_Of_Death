// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Sniper_Of_DeathHUD.generated.h"

UCLASS()
class ASniper_Of_DeathHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASniper_Of_DeathHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

