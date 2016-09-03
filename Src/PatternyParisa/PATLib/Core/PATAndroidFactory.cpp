#include "PATAndroidFactory.hpp"

using namespace ild;

GameTouch * PATAndroidFactory::inputHandler()
{
    return new GameTouch();
}
