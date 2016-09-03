#include "PlayerFactory.hpp"

using namespace ild;

void PlayerFactory::Initialize(PATGameSystems * gameSystems, PATInputHandler * inputHandler)
{
    auto playerEntity = gameSystems->systemManager().GetEntity("player");
    inputHandler->systems(gameSystems);
    auto controlComp = new PATInputComponent(playerEntity, *gameSystems, *inputHandler);
    gameSystems->input().AddComponent(playerEntity, controlComp);
}
