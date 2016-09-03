#ifndef PAT_Core_PATGame_H_
#define PAT_Core_PATGame_H_

#include <Ancona/Core2D/Core/Game.hpp>
#include "PATPlatformFactory.hpp"

namespace ild
{

/**
 * @brief Game class for initial game setup.
 */
class PATGame : public Game
{

    public:
        /**
         * @brief Constructs the game with the desired platform and screen size
         *
         * @param width Width of screen
         * @param height Height of screen
         * @param platform PATPlatformFactory for the platform launched on
         */
        PATGame(
                int width,
                int height,
                PATPlatformFactory * platform);

    protected:
        /**
         * @brief Used to initialize the first screen of the game.
         */
        void CreateInitialScreen();

    private:
        PATPlatformFactory * _platform;

};

}

#endif
