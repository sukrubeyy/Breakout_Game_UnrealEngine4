// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Ball2.h"
// Sets default values
ABrick::ABrick()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM Brick"));
	Box_Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision of Brick"));
	Box_Collision->SetBoxExtent(FVector(25.0f, 10.0f, 10.0f));
	RootComponent = Box_Collision;

	SM_Brick->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Brick->SetCollisionProfileName(TEXT("SM Brick Collision"));
	SM_Brick->SetEnableGravity(false);

	
}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();

	Box_Collision->OnComponentBeginOverlap.AddDynamic(this,&ABrick::OnOverlapBegin);
	
}

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABrick::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, 
							UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, 
							bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor->ActorHasTag("Ball"))
	{
		ABall2* MyBall = Cast<ABall2>(OtherActor);
		FVector BallVelocity = MyBall->GetVelocity();
		BallVelocity *= (SpeedModifierOnBouncy - 1.0f);
		MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity,true);
		FTimerHandle HandleTimer;
		GetWorldTimerManager().SetTimer(HandleTimer, this, &ABrick::DestroyBrick, 0.1f, false);
	}
}

void ABrick::DestroyBrick()
{
	this->Destroy();

}


