#ifndef PAT_Core_PATDesktopFactory_H_
#define PAT_Core_PATDesktopFactory_H_

#include "PATPlatformFactory.hpp"
#include "../Input/GameKeyboardAndMouse.hpp"

namespace ild
{

/**
 * @brief Everything needed to run on the Desktop platform.
 */
class PATDesktopFactory : public PATPlatformFactory
{
    public:
        /* getters and setters */
        GameKeyboardAndMouse * inputHandler() override;
};

}

#endif
