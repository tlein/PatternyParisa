#include <Ancona/Core2D/InputDevices/InputHandler.hpp>
#include <Ancona/Core2D/Systems/RotateSystem.hpp>
#include <Ancona/Util2D/VectorMath.hpp>

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
    auto oldVelocity = _systems.position().at(_playerEntity)->velocity();
    auto newVelocity = VectorMath::Rotate(oldVelocity, VectorMath::DegreesToRadians(-60));
    _systems.position().at(_playerEntity)->velocity(newVelocity);

    auto oldDrawableRotation = _systems.drawable()[_playerEntity]->topDrawable()->rotation();
    _systems.drawable()[_playerEntity]->topDrawable()->rotation(oldDrawableRotation - 60);

    auto cameraEntity = _systems.systemManager().GetEntity("screenCam");
    auto oldCameraRotation = _systems.camera()[cameraEntity]->rotation();
    _systems.camera()[cameraEntity]->rotation(oldCameraRotation - 60);
}

void PATInputComponent::RotateRight()
{
    auto oldVelocity = _systems.position().at(_playerEntity)->velocity();
    auto newVelocity = VectorMath::Rotate(oldVelocity, VectorMath::DegreesToRadians(60));
    _systems.position().at(_playerEntity)->velocity(newVelocity);

    auto oldDrawableRotation = _systems.drawable()[_playerEntity]->topDrawable()->rotation();
    _systems.drawable()[_playerEntity]->topDrawable()->rotation(oldDrawableRotation + 60);

    auto cameraEntity = _systems.systemManager().GetEntity("screenCam");
    auto oldCameraRotation = _systems.camera()[cameraEntity]->rotation();
    _systems.camera()[cameraEntity]->rotation(oldCameraRotation + 60);
}
