#include <Ancona/Framework/Resource/ResourceLoaderInit.hpp>

#include "PATGame.hpp"
#include "../Screens/TestScreen.hpp"

using namespace ild;

PATGame::PATGame(
        int width,
        int height,
        PATPlatformFactory * platform) :
    Game(width, height, "PatternyParisa"),
    _platform(platform)
{
    CreateInitialScreen();
    ResourceLoaderInit::Init();
}

void PATGame::CreateInitialScreen()
{
    _screenManager->Push(
            new TestScreen(*_screenManager, _platform->inputHandler()));
}
