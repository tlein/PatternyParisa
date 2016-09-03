#include <Ancona/Core2D/InputDevices/Keyboard.hpp>
#include <Ancona/Core2D/InputDevices/Mouse.hpp>

#include "../Systems/PATGameSystems.hpp"
#include "GameKeyboardAndMouse.hpp"

using namespace ild;

void GameKeyboardAndMouse::HandleInput(float delta)
{
    if (Keyboard::IsKeyPressed(sf::Keyboard::Left))
    {
        _playerComponent->RotateLeft();
    }
    if (Keyboard::IsKeyPressed(sf::Keyboard::Right))
    {
        _playerComponent->RotateRight();
    }
}
