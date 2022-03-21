// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "First_GunHUD.generated.h"

UCLASS()
class AFirst_GunHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFirst_GunHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

