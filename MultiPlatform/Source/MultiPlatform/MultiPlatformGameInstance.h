// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MultiPlatformGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLATFORM_API UMultiPlatformGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UMultiPlatformGameInstance(const FObjectInitializer& ObjectInitializer);

	virtual void Init();

	UFUNCTION(Exec)
	void Host();

	UFUNCTION(Exec)
	void Join(const FString& Address);

};
