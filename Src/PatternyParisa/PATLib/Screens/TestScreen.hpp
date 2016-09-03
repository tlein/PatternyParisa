#ifndef PAT_Screens_TestScreen_H_
#define PAT_Screens_TestScreen_H_

#include <Ancona/Framework/Screens/AbstractScreen.hpp>
#include "../Input/PATInputHandler.hpp"
#include "../Systems/PATGameSystems.hpp"

namespace ild
{

/**
 * @brief Generated test screen for PatternyParisa
 */
class TestScreen : public AbstractScreen
{
    public:
        /**
         * @brief Constructs the test screen for PatternyParisa
         *
         * @param manager ScreenManager used by the game.
         * @param inputHandler InputHandler used by the screen.
         */
        TestScreen(
                ScreenManager & manager,
                PATInputHandler * inputHandler);

        /**
         * @brief Will be called just before Update is called for the
         * first time.
         */
        void Init() override;

        /**
         * @brief Handles the update logic on the screen
         *
         * @param delta Seconds since last update.
         */
        void Update(float delta) override;

        /**
         * @brief Handles the draw logic on the screen
         *
         * @param delta Seconds since last draw.
         */
        void Draw(float delta) override;

        /* getters and setters */
        ScreenSystemsContainer * systemsContainer() override { return _systems.get(); }
    private:
        std::unique_ptr<PATInputHandler> _inputHandler;
        std::unique_ptr<PATGameSystems> _systems;
};

}

#endif
