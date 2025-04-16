// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "MainMenuGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UEP_API UMainMenuGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;

	UFUNCTION(BlueprintCallable)
	void CreateSession(const FString& RoomName);

private:
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);

	TSharedPtr<FOnlineSessionSettings> SessionSettings;

	IOnlineSessionPtr SessionInterface;
	
};
