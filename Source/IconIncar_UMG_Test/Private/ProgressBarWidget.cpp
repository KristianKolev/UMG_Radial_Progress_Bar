// Fill out your copyright notice in the Description page of Project Settings.


#include "ProgressBarWidget.h"

void UProgressBarWidget::NativeConstruct()
{
	Super::NativeConstruct();

	DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);

	ProgressBar->SetBrushFromMaterial(DynamicMaterial);
}
