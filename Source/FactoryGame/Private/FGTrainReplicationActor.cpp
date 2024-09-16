// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGTrainReplicationActor.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

bool FTrainReplicatedSimulationData::NetSerialize(FArchive& ar, UPackageMap* map, bool& out_success){ return bool(); }
bool FTrainReplicatedSimulationData::IsValid() const{ return bool(); }
AFGTrainReplicationActor::AFGTrainReplicationActor() : Super() {
	this->mLastServerSimulationState.FirstVehicle = nullptr;
	this->mLastServerSimulationState.FirstVehiclePosition.Track = nullptr;
	this->mLastServerSimulationState.FirstVehiclePosition.Offset = 0.0;
	this->mLastServerSimulationState.FirstVehiclePosition.Forward = 0.0;
	this->bReplicates = true;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
void AFGTrainReplicationActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGTrainReplicationActor, mVehicles);
	DOREPLIFETIME(AFGTrainReplicationActor, mLastServerSimulationState);
}
void AFGTrainReplicationActor::BeginPlay(){ }
void AFGTrainReplicationActor::EndPlay(const EEndPlayReason::Type endPlayReason){ }
UClass* AFGTrainReplicationActor::GetConcreteClassForTrainSize(int32 numVehicles){ return nullptr; }
void AFGTrainReplicationActor::SetVehicles(TArray< AFGRailroadVehicle* > vehicles){ }
const TArray< class AFGRailroadVehicle* >& AFGTrainReplicationActor::GetVehicles() const{ return *(new TArray< class AFGRailroadVehicle* >); }
void AFGTrainReplicationActor::SetServerSimulationState(FTrainReplicatedSimulationData& state){ }
const FTrainReplicatedSimulationData& AFGTrainReplicationActor::GetLastServerSimulationState() const{ return *(new FTrainReplicatedSimulationData); }
void AFGTrainReplicationActor::OnRep_Vehicles(){ }
void AFGTrainReplicationActor::OnRep_LastServerSimulationState(){ }
AFGTrainReplicationActor::FOnTrainReplicationActorAdded AFGTrainReplicationActor::OnTrainReplicationActorAdded = FOnTrainReplicationActorAdded();
AFGTrainReplicationActor::FOnTrainReplicationActorRemoved AFGTrainReplicationActor::OnTrainReplicationActorRemoved = FOnTrainReplicationActorRemoved();