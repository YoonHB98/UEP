// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameInstance.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Kismet/GameplayStatics.h"

void UMainMenuGameInstance::Init()
{
	Super::Init();

    IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
    if (Subsystem)
    {
        SessionInterface = Subsystem->GetSessionInterface();
        if (SessionInterface.IsValid())
        {
            SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &UMainMenuGameInstance::OnCreateSessionComplete);
        }
    }
}

void UMainMenuGameInstance::CreateSession(const FString& RoomName)
{
    if (!SessionInterface.IsValid())
        return;

    // 이전 세션이 있다면 제거
    if (SessionInterface->GetNamedSession(NAME_GameSession))
    {
        SessionInterface->DestroySession(NAME_GameSession);
    }

    SessionSettings = MakeShareable(new FOnlineSessionSettings());
    SessionSettings->bIsLANMatch = true; // 로컬 테스트용
    SessionSettings->NumPublicConnections = 4;
    SessionSettings->bShouldAdvertise = true;
    SessionSettings->bUsesPresence = true;
    SessionSettings->Set(FName("RoomName"), RoomName, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

    SessionInterface->CreateSession(0, NAME_GameSession, *SessionSettings);
}

void UMainMenuGameInstance::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
{
    if (!bWasSuccessful)
    {
        UE_LOG(LogTemp, Warning, TEXT("Session creation failed"));
        return;
    }

    UGameplayStatics::OpenLevel(GetWorld(), FName("TeamSelectMap"), true, "listen");
}
