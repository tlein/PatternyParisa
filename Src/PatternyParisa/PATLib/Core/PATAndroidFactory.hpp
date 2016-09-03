#ifndef PAT_Core_PATAndroidFactory_H_
#define PAT_Core_PATAndroidFactory_H_

#include "PATPlatformFactory.hpp"
#include "../Input/GameTouch.hpp"

namespace ild
{

/**
 * @brief Everything needed to run on the Android platform.
 */
class PATAndroidFactory : public PATPlatformFactory
{
    public:
        /* getters and setters */
        GameTouch * inputHandler() override;
};

}

#endif
