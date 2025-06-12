#include "VModernSaveLoadMenuItem.h"

UVModernSaveLoadMenuItem::UVModernSaveLoadMenuItem() {
    this->bIsSectionHeader = false;
    this->bIsInSaveMenu = false;
    this->bIsExpanded = false;
    this->bIsAchievementDisabled = false;
}

void UVModernSaveLoadMenuItem::SetTimeText(const FText& Value) {
}

void UVModernSaveLoadMenuItem::SetText(const FText& Value) {
}

void UVModernSaveLoadMenuItem::SetSlotName(const FString& NewSlotName) {
}

void UVModernSaveLoadMenuItem::SetIsSectionHeader(const bool InNewBool) {
}

void UVModernSaveLoadMenuItem::SetIsInSaveMenu(const bool InNewBool) {
}

void UVModernSaveLoadMenuItem::SetIsExpanded(const bool InNewBool) {
}

void UVModernSaveLoadMenuItem::SetIsAchievementDisabled(const bool InNewBool) {
}

void UVModernSaveLoadMenuItem::SetCharacterId(const FGuid& NewCharacterId) {
}

FText UVModernSaveLoadMenuItem::GetTimeText() const {
    return FText::GetEmpty();
}

FText UVModernSaveLoadMenuItem::GetText() const {
    return FText::GetEmpty();
}

FString UVModernSaveLoadMenuItem::GetSlotName() const {
    return TEXT("");
}

bool UVModernSaveLoadMenuItem::GetIsSectionHeader() const {
    return false;
}

bool UVModernSaveLoadMenuItem::GetIsOnExpandedBound() const {
    return false;
}

bool UVModernSaveLoadMenuItem::GetIsInSaveMenu() const {
    return false;
}

bool UVModernSaveLoadMenuItem::GetIsExpanded() const {
    return false;
}

bool UVModernSaveLoadMenuItem::GetIsAchievementDisabled() const {
    return false;
}

FGuid UVModernSaveLoadMenuItem::GetCharacterId() const {
    return FGuid{};
}


