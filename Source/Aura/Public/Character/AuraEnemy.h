// Copyright Alexandre Fleutelot

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();
	/** Enemy interface start */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/** Enemy interface end */

	/** Combat Interface start **/
	virtual int32 GetPlayerLevel() override;
	/** Combat interface end */
	
protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Default")
	int32 Level = 1;

};
