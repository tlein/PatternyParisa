#ifndef PAT_Input_GameTouch_H_
#define PAT_Input_GameTouch_H_

#include "PATInputHandler.hpp"

namespace ild
{

/**
 * @brief Touch input handler for PatternyParisa
 */
class GameTouch: public PATInputHandler
{
    public:
        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput(float delta) override;

    private:
        void HandleFingerPress(const int finger);
};

}

#endif
