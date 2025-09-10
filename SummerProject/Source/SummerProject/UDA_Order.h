// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UDA_Order.generated.h"

/**
 * 
 */
UENUM(Blueprintable,BlueprintType)
enum class EPlantType : uint8
{
	None UMETA(DisplayName = "None"),
	Chamomile UMETA(DisplayName = "Chamomile"),
	Ginger UMETA(DisplayName = "Ginger"),
	Ginko UMETA(DisplayName = "Ginko")
};

USTRUCT(Blueprintable, BlueprintType)
struct FOrders {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* CharacterPortrait;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OrderName;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EPlantType, int32> Ingredients; 
};


UCLASS(Blueprintable, BlueprintType)
class SUMMERPROJECT_API UDA_Order : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Variables")
	TArray<FOrders>	OrderArray;
};
