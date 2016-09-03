#ifndef PAT_Input_GameKeyboardAndMouse_H_
#define PAT_Input_GameKeyboardAndMouse_H_

#include "PATInputHandler.hpp"

namespace ild
{

/**
 * @brief Keyboard & mouse handler for PatternyParisa
 */
class GameKeyboardAndMouse: public PATInputHandler
{
    public:
        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput(float delta) override;
};

}

#endif
