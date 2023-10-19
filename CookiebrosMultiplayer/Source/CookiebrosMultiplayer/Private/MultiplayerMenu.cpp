// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerMenu.h"
#include "Components/Button.h"
#include "CookieBrosSessionSubSys.h"
#include "OnlineSessionSettings.h"

void UMultiplayerMenu::MenuSetup(int32 NumberOfPublicConnections, FString TypeOfMatch, TSoftObjectPtr<UWorld> Lobby)
{
	NumOfPublicConnections = NumberOfPublicConnections;
	MatchType = TypeOfMatch;
	LobbyLevel = FString::Printf(TEXT("%s?listen"), *Lobby.ToSoftObjectPath().GetAssetName());
	
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	SetIsFocusable(true);
	

	if(UWorld* World = GetWorld())
	{
		if (APlayerController* PlayerController = World->GetFirstPlayerController())
		{
			FInputModeUIOnly InputModeData;
			InputModeData.SetWidgetToFocus(TakeWidget());
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(true);
		}
	}
	

	if (UGameInstance* GameInstance = GetGameInstance())
		CookieBrosSessionSubSys = GameInstance->GetSubsystem<UCookieBrosSessionSubSys>();

	//bind custom Delegates 
	if (CookieBrosSessionSubSys)
	{
		CookieBrosSessionSubSys->MultiplayerOnCreateSessionComplete.AddDynamic(this, &ThisClass::OnCreateSession);
		CookieBrosSessionSubSys->MultiplayerOnFindSessionsComplete.AddUObject(this, &ThisClass::OnFindSessions);
		CookieBrosSessionSubSys->MultiplayerOnJoinSessionComplete.AddUObject(this, &ThisClass::OnJoinSession);
		CookieBrosSessionSubSys->MultiplayerOnStartSessionComplete.AddDynamic(this, &ThisClass::OnStartSession);
		CookieBrosSessionSubSys->MultiplayerOnDestroySessionComplete.AddDynamic(this, &ThisClass::OnDestroySession);
	}
}

bool UMultiplayerMenu::Initialize()
{
	if (!Super::Initialize())
		return false;
	
	if (HostButt)
		HostButt->OnClicked.AddDynamic(this, &ThisClass::HostButtClicked);

	if (JoinButt)
		JoinButt->OnClicked.AddDynamic(this, &ThisClass::JoinButtClicked);
	
	return true;
}

void UMultiplayerMenu::NativeDestruct()
{
	MenuTearDown();
	Super::NativeDestruct();
}

void UMultiplayerMenu::OnCreateSession(bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		if (UWorld* World = GetWorld())
			World->ServerTravel(LobbyLevel);
	}
	else
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			FString(TEXT("Session WASN'T created")));

		HostButt->SetIsEnabled(true);
	}
}

void UMultiplayerMenu::OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResult, bool bWasSuccessful)
{
	if (CookieBrosSessionSubSys == nullptr)
		return;
	
	for (auto Result : SessionResult)
	{
		FString SettingsValue;
		Result.Session.SessionSettings.Get(FName("MatchType"), SettingsValue);
		if (SettingsValue == MatchType)
		{
			CookieBrosSessionSubSys->JoinSession(Result);
			return;
		}
	}

	if (!bWasSuccessful || SessionResult.Num() == 0)
		JoinButt->SetIsEnabled(true);
}

void UMultiplayerMenu::OnJoinSession(EOnJoinSessionCompleteResult::Type Result)
{
	if (IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get())
	{
		IOnlineSessionPtr SessionInterface = Subsystem->GetSessionInterface();
		if (SessionInterface.IsValid())
		{
			FString Address;
			SessionInterface->GetResolvedConnectString(NAME_GameSession, Address);

			if (APlayerController* PlayerController = GetGameInstance()->GetFirstLocalPlayerController())
				PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
		}
	}

	if (Result != EOnJoinSessionCompleteResult::Success)
		JoinButt->SetIsEnabled(true);
}

void UMultiplayerMenu::OnStartSession(bool bWasSuccessful)
{
}

void UMultiplayerMenu::OnDestroySession(bool bWasSuccessful)
{
}

void UMultiplayerMenu::HostButtClicked()
{
	HostButt->SetIsEnabled(false);
	if (CookieBrosSessionSubSys)
		CookieBrosSessionSubSys->CreateSession(NumOfPublicConnections, MatchType);
}

void UMultiplayerMenu::JoinButtClicked()
{
	JoinButt->SetIsEnabled(false);
	if (CookieBrosSessionSubSys)
		CookieBrosSessionSubSys->FindSessions(10'000);
}

void UMultiplayerMenu::MenuTearDown()
{
	RemoveFromParent();

	if (UWorld* World = GetWorld())
	{
		if (APlayerController* PlayerController = World->GetFirstPlayerController())
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(false);
		}
	}
}
