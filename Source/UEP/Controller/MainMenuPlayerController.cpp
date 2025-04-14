// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/MainMenuPlayerController.h"
//#include "MainMenuPlayerController.h"
#include "Blueprint/UserWidget.h"

void AMainMenuPlayerController::BeginPlay()
{
	Super::BeginPlay();

    // 마우스 커서 보이기

    bShowMouseCursor = true;

    // UI 전용 입력 모드
    FInputModeUIOnly InputMode;
    SetInputMode(InputMode);

    // 위젯 생성 및 표시
    if (MainMenuWidgetClass)
    {
        MainMenuWidget = CreateWidget(this, MainMenuWidgetClass);
        if (MainMenuWidget)
        {
            MainMenuWidget->AddToViewport();
        }
    }
}
