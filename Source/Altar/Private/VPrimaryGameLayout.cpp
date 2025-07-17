#include "VPrimaryGameLayout.h"

UVPrimaryGameLayout::UVPrimaryGameLayout() {
    this->Blur = NULL;
}

FName UVPrimaryGameLayout::SuspendInputForPlayer(APlayerController* PlayerController, FName SuspendReason) {
    return NAME_None;
}

void UVPrimaryGameLayout::SetInputMode() {
}

void UVPrimaryGameLayout::ResumeInputForPlayer(APlayerController* PlayerController, FName SuspendToken) {
}

void UVPrimaryGameLayout::RegisterLayer(FGameplayTag LayerTag, UVActivatableWidgetStack* LayerWidget) {
}

void UVPrimaryGameLayout::OnGameScreenshotCapturedDelegate(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData) {
}

bool UVPrimaryGameLayout::IsLayerActive(const FGameplayTag& LayerTag) const {
    return false;
}


void UVPrimaryGameLayout::EndLayersRegistration() {
}


