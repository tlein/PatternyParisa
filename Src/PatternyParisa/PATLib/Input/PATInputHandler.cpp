#include <Ancona/Core2D/InputDevices/InputHandler.hpp>
#include <Ancona/Core2D/Systems/RotateSystem.hpp>

#include "../Systems/PATGameSystems.hpp"
#include "PATInputHandler.hpp"

using namespace ild;

///////////////////////////////
// PATInputHandler
void PATInputHandler::RegisterInputComponent(PATInputComponent * component)
{
    _playerComponent = component;
}

///////////////////////////////
// PATInputComponent
PATInputComponent::PATInputComponent(
        const Entity & player,
        PATGameSystems & systems,
        PATInputHandler & inputHandler) :
    InputControlComponent(inputHandler),
    _playerEntity(player),
    _systems(systems)
{
    inputHandler.RegisterInputComponent(this);
}

void PATInputComponent::RotateLeft()
{
    ... ->velocity->rotate(-60);
}

void PATInputComponent::RotateRight()
{
}
