// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDecorationActor.h"

AFGDecorationActor::AFGDecorationActor() : Super() {
	this->bReplicates = true;
}
void AFGDecorationActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGDecorationActor::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDecorationActor::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDecorationActor::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDecorationActor::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDecorationActor::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGDecorationActor::NeedTransform_Implementation(){ return bool(); }
bool AFGDecorationActor::ShouldSave_Implementation() const{ return bool(); }
