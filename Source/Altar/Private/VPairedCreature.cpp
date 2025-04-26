#include "VPairedCreature.h"
#include "VAltarSpringArmComponent.h"

AVPairedCreature::AVPairedCreature(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Rider = NULL;
    this->MountCameraSpringArmComponent = NULL;
    this->TurningAnimationsYawDeltaThreshold = 1.00f;
    //FIXME
    //this->MountCameraSpringArmComponent->SetupAttachment(FakeRoot);
}


