#include "PATDesktopFactory.hpp"

using namespace ild;

GameKeyboardAndMouse * PATDesktopFactory::inputHandler()
{
    return new GameKeyboardAndMouse();
}
