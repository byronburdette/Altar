#include "BIEventManager.h"

UBIEventManager::UBIEventManager() {
    this->BIEventBulkSendRateMS = 30000;
    this->MaxNumberOfBulkBIEventsCallsPerFrame = 2;
    this->ForceWaitCallbackTimeoutMS = 5000;
}


