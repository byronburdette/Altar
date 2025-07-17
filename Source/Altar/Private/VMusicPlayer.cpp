#include "VMusicPlayer.h"

AVMusicPlayer::AVMusicPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayMusicEvent = NULL;
    this->PauseMusicEvent = NULL;
    this->ResumeMusicEvent = NULL;
    this->StopMusicEvent = NULL;
    this->StopAllDialogueEvent = NULL;
}

void AVMusicPlayer::PlayMainMenuMusic() {
}

void AVMusicPlayer::OnMusicSuccessEnded(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void AVMusicPlayer::OnLoadStarted() {
}


