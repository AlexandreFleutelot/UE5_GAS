// Copyright Alexandre Fleutelot

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

class USpringArmComponent;
/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraCharacter();
	
	/** Begin AActor Interface */
	virtual void PossessedBy(AController* NewController) override;
	/** End AActor Interface */

	/** Begin APawn Interface */
	virtual void OnRep_PlayerState() override;
	/** End APawn Interface */
	
private:
	void InitAbilityActorInfo();
};
