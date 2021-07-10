// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball2.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABall2::ABall2()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM BALL MESH"));

	RootComponent = SM_Ball;
	SM_Ball->SetSimulatePhysics(true);
	SM_Ball->SetEnableGravity(false);
	SM_Ball->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Ball->SetConstraintMode(EDOFMode::XZPlane);
	SM_Ball->SetCollisionProfileName(TEXT("PhysicsActor"));
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	//Merminin Zýplamasý gerektiðini söylüyoruz
	ProjectileMovement->bShouldBounce = true;
	//Zýplama Kuvveti
	ProjectileMovement->Bounciness = 1.1f;
	//Sürtünme Kuvveti Olmasýn
	ProjectileMovement->Friction = 0.0f;
	ProjectileMovement->Velocity.X = 0.0f;


}

void ABall2::Launch()
{
	if (!BallLaunched)
	{
		SM_Ball->AddImpulse(FVector(140.0f, 0.0f, 130.0f), FName(), true);
		BallLaunched = true;
	}
}

// Called when the game starts or when spawned
void ABall2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABall2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABall2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UStaticMeshComponent* ABall2::GetBall()
{
	return SM_Ball;
}

