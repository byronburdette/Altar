#include "LocalMapManager.h"

ULocalMapManager::ULocalMapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocalMapDepthCaptureComponent = NULL;
    this->LocalMapBaseColorCaptureComponent = NULL;
    this->CutMaterial = NULL;
    this->LocalMapDepthCaptureOrthoWidth = 30000.00f;
    this->bOnLocalMapMode = false;
    this->PlayerPawn = NULL;
}

void ULocalMapManager::TriggerLocalMapMode() {
}

void ULocalMapManager::ToggleMode() {
}

void ULocalMapManager::QuitLocalMapMode() {
}

FVector ULocalMapManager::LocalMapToUnrealWorld(const FVector2D& LocalMapPosition, const FVector2D& MapSize) const {
    return FVector{};
}

FVector2D ULocalMapManager::GetLocalMapCoordinates(FVector WorldPosition) const {
    return FVector2D{};
}


