#pragma once
#include "CoreMinimal.h"
#include "EVDockingRequestType.generated.h"

UENUM(BlueprintType)
enum class EVDockingRequestType : uint8 {
    None,
    Docking,
    Undocking,
};

