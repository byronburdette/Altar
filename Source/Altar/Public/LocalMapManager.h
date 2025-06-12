#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "LocalMapManager.generated.h"

class APawn;
class UMaterial;
class UMaterialInterface;
class USceneCaptureComponent2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API ULocalMapManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraRotationAngles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* LocalMapDepthCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* LocalMapBaseColorCaptureComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* CutMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalMapDepthCaptureOrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnLocalMapMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UMaterialInterface*> CutMaterialInstances;
    
public:
    ULocalMapManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerLocalMapMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMode();
    
    UFUNCTION(BlueprintCallable)
    void QuitLocalMapMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector LocalMapToUnrealWorld(const FVector2D& LocalMapPosition, const FVector2D& MapSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLocalMapCoordinates(FVector WorldPosition) const;
    
};

