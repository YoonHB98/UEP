// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/MainMenuUserWidget.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenuGameInstance.h"

void UMainMenuUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (CreateRoomButton)
	{
		CreateRoomButton->OnClicked.AddDynamic(this, &UMainMenuUserWidget::OnCreateRoomClicked);
	}

	if (ConfirmButton)
	{
		ConfirmButton->OnClicked.AddDynamic(this, &UMainMenuUserWidget::OnConfirmClicked);
		ConfirmButton->SetVisibility(ESlateVisibility::Hidden);
	}

	if (RoomNameTextBox)
	{
		RoomNameTextBox->OnTextCommitted.AddDynamic(this, &UMainMenuUserWidget::OnRoomNameCommitted);
		RoomNameTextBox->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UMainMenuUserWidget::OnCreateRoomClicked()
{
	RoomNameTextBox->SetVisibility(ESlateVisibility::Visible);
	ConfirmButton->SetVisibility(ESlateVisibility::Visible);
}

void UMainMenuUserWidget::OnConfirmClicked()
{
	FString RoomName = RoomNameTextBox->GetText().ToString();

	if (!RoomName.IsEmpty())
	{
		UMainMenuGameInstance* GameInstance = Cast<UMainMenuGameInstance>(UGameplayStatics::GetGameInstance(this));
		if (GameInstance)
		{
			GameInstance->CreateSession(RoomName);
		}
	}
	else
	{
		// error message
	}
}

void UMainMenuUserWidget::OnRoomNameCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter)
	{
		FString RoomName = Text.ToString();
		if (!RoomName.IsEmpty())
		{
			UMainMenuGameInstance* GameInstance = Cast<UMainMenuGameInstance>(UGameplayStatics::GetGameInstance(this));
			if (GameInstance)
			{
				GameInstance->CreateSession(RoomName);
			}
		}
		else
		{
			// error message
		}
	}
}
