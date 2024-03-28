// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaKamikaze.h"

void ANaveEnemigaKamikaze::BeginPlay()
{
	Super::BeginPlay();
}

ANaveEnemigaKamikaze::ANaveEnemigaKamikaze()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaKamikaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaKamikaze::Mover(float DeltaTime)
{
	//Obtiene una nueva pocision para 
	FVector PosicionActual = GetActorLocation();

	//Genera nuevas coordenadas X e Y aleatorias
	float NuevaX = 0.0f;
	//float NuevaX = FMath::RandRange(-200.0f, 200.0f) * DeltaTime;
	float NuevaY = FMath::RandRange(.0f, 200.0f) * DeltaTime;

	float Velocidady = 800.0f; // Velocidad constante en el eje X
	float Nuevay = Velocidady * DeltaTime;

	// Crea un nuevo vector de posici�n con las coordenadas aleatorias y la misma Z que la posici�n actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	//Establece la nueva posici�n del actor
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaKamikaze::Destruirse(float dimencion, float tiempo)
{

}
