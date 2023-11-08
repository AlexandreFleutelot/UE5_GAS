// Copyright Alexandre Fleutelot


#include "Character/AuraCharacterBase.h"

// Sets default values
AAuraCharacterBase::AAuraCharacterBase()
{
 	// Set this character to not call Tick() every frame.
	PrimaryActorTick.bCanEverTick = false;
    
    // Initialise our weapon component
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	// Associate it to a named slot on the SkeletonMesh
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	// No collision for the weapon
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


