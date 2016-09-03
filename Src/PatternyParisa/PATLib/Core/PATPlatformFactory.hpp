#ifndef PAT_Core_PATPlatformFactory_H_
#define PAT_Core_PATPlatformFactory_H_

#include "../Input/PATInputHandler.hpp"

namespace ild
{

/**
 * @brief Defines everything all platforms must provide to run the game on
 */
class PATPlatformFactory
{
    public:
        /* getters and setters */
        virtual PATInputHandler * inputHandler() = 0;

};

}

#endif
