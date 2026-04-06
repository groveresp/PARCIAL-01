// Copyright Epic Games, Inc. All Rights Reserve

#include "NavesLAB01USFXProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

ANavesLAB01USFXProjectile::ANavesLAB01USFXProjectile()
{
    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
    RootComponent = ProjectileMesh;

    // Intenta cargar el asset, si no, usa una esfera del motor
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));
    if (MeshAsset.Succeeded()) {
        ProjectileMesh->SetStaticMesh(MeshAsset.Object);
    }
    else {
        static ConstructorHelpers::FObjectFinder<UStaticMesh> DefaultMesh(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
        ProjectileMesh->SetStaticMesh(DefaultMesh.Object);
        ProjectileMesh->SetRelativeScale3D(FVector(0.5f));
    }

    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
    ProjectileMovement->InitialSpeed = 3000.f;
    ProjectileMovement->MaxSpeed = 3000.f;
    ProjectileMovement->ProjectileGravityScale = 0.f;

    InitialLifeSpan = 3.0f;
}

void ANavesLAB01USFXProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}