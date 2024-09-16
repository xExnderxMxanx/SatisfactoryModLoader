// This file has been automatically generated by the Unreal Header Implementation tool

#include "UI/FGSessionInformationModel.h"

void UFGSessionInformationModel::SetOnlineSessionInfo(USessionInformation* inOnlineSessionInfo){ }
void UFGSessionInformationModel::InitializeState(APlayerController* firstPlayerController, AFGGameState* inGameState){ }
void UFGSessionInformationModel::SetSessionState(EFactorySessionState inSessionState, FTimespan inGameDuration){ }
void UFGSessionInformationModel::AddPlayerToSession(AFGPlayerState* inPlayerState){ }
void UFGSessionInformationModel::RemovePlayerFromSession(AFGPlayerState* inPlayerState){ }
TArray< FCustomOnlineSessionSetting > UFGSessionInformationModel::GetInitialSessionSettingsFromSaveHeader(const FSaveHeader& saveHeader){ return TArray<FCustomOnlineSessionSetting>(); }
TArray< FCustomOnlineSessionSetting > UFGSessionInformationModel::GetInitialSessionSettingsForNewGame(const FString& sessionName, bool isCreativeModeEnabled){ return TArray<FCustomOnlineSessionSetting>(); }
void UFGSessionInformationModel::OnSessionAttributesAdded(const TArray<FCustomOnlineSessionSetting>& newAttributes){ }
void UFGSessionInformationModel::OnSessionAttributesRemoved(const TArray<FName>& removedAttributes){ }
void UFGSessionInformationModel::OnSessionAttributesUpdated(const TArray<FCustomOnlineSessionSetting>& updatedAttributes){ }
void UFGSessionInformationModel::RebuildRows(){ }
void UFGSessionInformationModel::SetCreativeModeEnabled(bool isEnabled){ }
void UFGSessionInformationModel::SetSessionName(const FString& inSessionName){ }
void UFGSessionInformationModel::SetCurrentGamePhase(UFGGamePhase* inCurrentPhase){ }
void UFGSessionInformationModel::SetActiveSchematic(TSubclassOf<UFGSchematic> inActiveSchematic){ }
void UFGSessionInformationModel::ReadyToReadFromSubsystems(){ }
void UFGSessionInformationModel::InitializeStateFromSubsystems(bool flushMetadata){ }