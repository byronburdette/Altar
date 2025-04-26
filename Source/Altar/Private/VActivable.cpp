#include "VActivable.h"
#include "Components/SkeletalMeshComponent.h"
#include "NavAreas/NavArea_Null.h"
#include "VAltarAkComponent.h"
#include "VAnimationObjectPairingComponent.h"
#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVActivable::AVActivable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->TESRefComponent = NULL;
    this->TransformPairingComponent = NULL;
    this->AnimationObjectPairingComponent = NULL;
    this->SkeletalMeshComponent = NULL;
    this->PhysicsControllerComponent = NULL;
    this->AkAudioComponent = NULL;
    this->bDoesDetonateItsProjectilesAsSoonAsTheyAppear = false;
    this->bChangeNavModifierAreaOnOpenCloseState = false;
    this->OpenNavArea = NULL;
    this->CloseNavArea = UNavArea_Null::StaticClass();
    this->bShouldPhysicsWaitForCustomTrigger = false;
    this->bPortalStartsOpened = false;
    this->bForwardAnimationOpensPortal = true;
    this->bIsPortalOpened = false;
    this->OwnedNavModifierComponent = NULL;
    this->PortalComponent = NULL;
    // fixme this->AkAudioComponent->SetupAttachment(RootComponent);
}

void AVActivable::TriggerActivateForPhysics() {
}




