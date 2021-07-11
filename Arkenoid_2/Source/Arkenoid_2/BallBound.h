// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallBound.generated.h"



class UBoxComponent;
class APaddle_Player_Controller;
UCLASS()
class ARKENOID_2_API ABallBound : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABallBound();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
		UBoxComponent* Box_Collision;

	APaddle_Player_Controller* Player_Controller_REF;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedCom, class AActor* otherActor,
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweep,
			const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
