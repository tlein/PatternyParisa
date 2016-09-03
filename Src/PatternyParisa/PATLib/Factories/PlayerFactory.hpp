#ifndef PAT_Factories_PlayerFactory_H_
#define PAT_Factories_PlayerFactory_H_

#include <Ancona/Core2D/Systems/Collision/CollisionSystem.hpp>


#include "../Systems/PATGameSystems.hpp"
#include "../Input/PATInputHandler.hpp"

namespace ild
{

namespace PlayerFactory
{

/**
 * Initializes the player's non serialized attributes
 * @param gameSystems  GameSystems class for the game
 * @param inputHandler InputHandler for the player
 */
void Initialize(PATGameSystems * gameSystems, PATInputHandler * inputHandler);

}

}

#endif
