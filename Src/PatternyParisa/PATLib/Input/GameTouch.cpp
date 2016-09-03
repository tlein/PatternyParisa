#include <Ancona/Core2D/InputDevices/Touch.hpp>

#include "../Systems/PATGameSystems.hpp"
#include "GameTouch.hpp"

using namespace ild;

void GameTouch::HandleInput(float delta)
{
    HandleFingerPress(0);
    HandleFingerPress(1);
}

void GameTouch::HandleFingerPress(const int finger)
{
    if (Touch::IsFingerPressed(finger))
    {
        auto mousePosition = sf::Touch::getPosition(finger);
        if (mousePosition.x < 400)
        {
            _playerComponent->RotateLeft();
        }
        else
        {
            _playerComponent->RotateRight();
        }
    }
}
