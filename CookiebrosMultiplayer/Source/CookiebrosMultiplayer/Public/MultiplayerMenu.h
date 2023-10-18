// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "MultiplayerMenu.generated.h"

/**
 * 
 */
UCLASS()
class COOKIEBROSMULTIPLAYER_API UMultiplayerMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void MenuSetup(
		int32 NumberOfPublicConnections = 4,
		FString TypeOfMatch = FString(TEXT("FreeForAll")),
		TSoftObjectPtr<UWorld> Lobby = nullptr);

protected:
	virtual bool Initialize() override;
	virtual void NativeDestruct() override;

	//
	//
	//Callbacks for the custom Delegates
	UFUNCTION()
	void OnCreateSession(bool bWasSuccessful); 
	void OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResult, bool bWasSuccessful);
	void OnJoinSession(EOnJoinSessionCompleteResult::Type Result);
	UFUNCTION()
	void OnStartSession(bool bWasSuccessful);
	UFUNCTION()
	void OnDestroySession(bool bWasSuccessful);

	
private:
	UPROPERTY(meta = (BindWidget))
	class UButton* HostButt;

	UPROPERTY(meta = (BindWidget))
	UButton* JoinButt;

	UFUNCTION()
	void HostButtClicked();

	UFUNCTION()
	void JoinButtClicked();

	void MenuTearDown();

	//
	class UCookieBrosSessionSubSys* CookieBrosSessionSubSys;

	int32 NumOfPublicConnections{4};
	FString MatchType{TEXT("FreeForAll")};
	FString LobbyLevel{TEXT("")};
};
