// Fill out your copyright notice in the Description page of Project Settings.


#include "BallBound.h"
#include "Components/BoxComponent.h"
#include "Kismet/GamePlayStatics.h"
#include "Paddle_Player_Controller.h"



// Sets default values
ABallBound::ABallBound()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box_Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	RootComponent = Box_Collision;


}

// Called when the game starts or when spawned
void ABallBound::BeginPlay()
{
	Super::BeginPlay();

	Box_Collision->OnComponentBeginOverlap.AddDynamic(this,&ABallBound::OnOverlapBegin);
	Player_Controller_REF = Cast<APaddle_Player_Controller>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

}

void ABallBound::OnOverlapBegin(UPrimitiveComponent* OverlappedCom, AActor* otherActor, 
								UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweep, 
								const FHitResult& SweepResult)
{
	if (otherActor->ActorHasTag("Ball"))
	{
		otherActor->Destroy();
		Player_Controller_REF->SpawnNewBall();
	}
}

// Called every frame
void ABallBound::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

