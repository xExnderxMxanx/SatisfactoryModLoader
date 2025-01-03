// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGAttentionPingActor.h"
#include "Net/UnrealNetwork.h"

AFGAttentionPingActor::AFGAttentionPingActor() : Super() {
	this->mOwningPlayerState = nullptr;
	this->mCompassTexture = nullptr;
	this->mLifeSpan = 10.0;
	this->mActorRepresentationLifeSpan = 5.0;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bAlwaysRelevant = true;
	this->SetReplicatingMovement(true);
	this->bReplicates = true;
}
void AFGAttentionPingActor::BeginPlay(){ Super::BeginPlay(); }
void AFGAttentionPingActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGAttentionPingActor, mOwningPlayerState);
}
void AFGAttentionPingActor::SetOwningPlayerState( AFGPlayerState* playerState){ }
void AFGAttentionPingActor::OnRep_OwningPlayerState(){ }
