// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	ANaveEnemigaEspia();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
};
