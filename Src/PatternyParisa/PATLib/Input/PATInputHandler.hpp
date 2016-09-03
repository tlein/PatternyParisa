#ifndef PAT_Input_PATInputHandler_H_
#define PAT_Input_PATInputHandler_H_

#include <Ancona/Core2D/InputDevices/InputHandler.hpp>
#include <Ancona/Core2D/Systems/InputControlComponent.hpp>

#include "../Systems/PATGameSystems.hpp"

namespace ild
{

class PATGameSystems;
class PATInputComponent;

/**
 * @brief Base InputHandler for PatternyParisa
 */
class PATInputHandler : public InputHandler
{
    public:
        /**
         * @brief Registers the input component that handles the actions done via input.
         *
         * @param component InputComponent instance
         */
        void RegisterInputComponent(PATInputComponent * component);

        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput(float delta) { };

        /* getters and setters */
        void systems(PATGameSystems * systems) { _systems = systems; }
    protected:
        PATInputComponent * _playerComponent;
        PATGameSystems * _systems;
};

/**
 * @brief InputComponent for game player interaction for PatternyParisa
 */
class PATInputComponent : public InputControlComponent
{
    public:
        /**
         * @brief Constructs the input component used by PatternyParisa
         *
         * @param player Entity that represents the player.
         * @param systems GameSystems for PatternyParisa
         * @param inputHandler InputHandler for PatternyParisa
         */
        PATInputComponent(
                const Entity & player,
                PATGameSystems & systems,
                PATInputHandler & inputHandler);

        void RotateLeft();
        void RotateRight();

    private:
        Entity _playerEntity;
        PATGameSystems & _systems;
};

}

#endif
