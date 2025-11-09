// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UDA_Character.generated.h"
/**
 * 
 */

USTRUCT(Blueprintable, BlueprintType)
struct FCharacterStruct {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* CharacterPortrait;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int FriendshipLevel;
};


UCLASS(Blueprintable, BlueprintType)
class SUMMERPROJECT_API UDA_Character: public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Variables")
	FCharacterStruct Character;
};
