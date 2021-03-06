#include "PATGameSystems.hpp"

using namespace ild;

PATGameSystems::PATGameSystems(ScreenManager & screenManager) :
    ScreenSystemsContainer(screenManager, 0)
{
    _position = ConstructSystem<PositionSystem>("position", *_systemManager);
    _input = new InputControlSystem(*_systemManager);
    _camera = ConstructSystem<CameraSystem>("camera", *_systemManager);
    _drawable = ConstructSystem<DrawableSystem>("drawable", screenManager.Window, *_systemManager);
    _collision = ConstructSystem<CollisionSystem>("collision", *_systemManager,*_position);
    _action = ConstructSystem<ActionSystem>("action", *_systemManager, _position);
    _rotate = ConstructSystem<RotateSystem>("rotate", *_systemManager, _drawable);
    _rotateDeceleration = ConstructSystem<RotateDecelerationSystem>("rotateDeceleration", *_systemManager, _rotate);

    _collision->CreateType("none");
    _collision->CreateType("player");
    _collision->CreateType("ground");
}
