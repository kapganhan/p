// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "INT_BaseCharacter.generated.h"

class AVoiceOfDarknessCharacter;
class AActor;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UINT_BaseCharacter : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class VOICEOFDARKNESS_API IINT_BaseCharacter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BaseCharacter")
	bool IsPlayer();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BaseCharacterReferance")
	AVoiceOfDarknessCharacter* GetBaseCharacterReferance();
	
};