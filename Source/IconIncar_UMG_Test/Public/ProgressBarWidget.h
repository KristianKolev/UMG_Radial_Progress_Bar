// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/Image.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ProgressBarWidget.generated.h"

/**
 *
 */
UCLASS()
class ICONINCAR_UMG_TEST_API UProgressBarWidget : public UUserWidget
{
	GENERATED_BODY()

private:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UImage* ProgressBar = nullptr;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInterface* Material = nullptr;

	UMaterialInstanceDynamic* DynamicMaterial = nullptr;

private:
	UPROPERTY(EditAnywhere, Interp, Category = "Circle Properties", meta = ( ClampMin = "0.0", ClampMax = "1.0" ) )
	float Percent{1.f};

	UPROPERTY(EditAnywhere, Interp, Category = "Circle Properties", meta = (ClampMin = "0.0", ClampMax = "0.5") )
	float Radius{0.5f};

	UPROPERTY(EditAnywhere, Interp, Category = "Circle Properties", meta = (ClampMin = "0.0", ClampMax = "0.5") )
	float Thickness{0.1f};

	UPROPERTY(EditAnywhere, Interp, Category = "Circle Properties")
	float Density{120.f};

	UPROPERTY(EditAnywhere, Interp, Category = "Position", meta = (ClampMin = "0.0", ClampMax = "1.0") )
	float Rotation{0.75f};

	UPROPERTY(EditAnywhere, Interp, Category = "Position", meta = (ClampMin = "0.0", ClampMax = "359.0") )
	float StartAngle{60.f};

	UPROPERTY(EditAnywhere, Interp, Category = "Position", meta = (ClampMin = "1.0", ClampMax = "360.0") )
	float EndAngle{300.f};

	UPROPERTY(EditAnywhere, Interp, Category = "Color")
	FVector4 FillColor{ 0.4773f, 0.0062f, 0.6771f, 1.f };

	UPROPERTY(EditAnywhere, Interp, Category = "Color")
	FVector4 GradientColor{ 0.f, 0.2371f, 1.f, 1.f  };

	UPROPERTY(EditAnywhere, Category = "Color")
	bool UseGradientColor{false};
};
