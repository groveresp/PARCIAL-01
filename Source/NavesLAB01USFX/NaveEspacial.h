#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEspacial.generated.h"

UCLASS(Abstract)
class NAVESLAB01USFX_API ANaveEspacial : public AActor
{
	GENERATED_BODY()

public:
	ANaveEspacial();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void Desplazar(float DeltaTime) PURE_VIRTUAL(ANaveEspacial::Desplazar, );

	float ObtenerSalud() const { return Salud; }
	float ObtenerVelocidad() const { return Velocidad; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Nave")
	float Salud;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Nave")
	float Velocidad;

	UPROPERTY(VisibleAnywhere, Category = "Nave")
	class UStaticMeshComponent* ComponenteMalla;
};
