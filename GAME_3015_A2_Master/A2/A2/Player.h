#pragma once
#include "CommandQueue.h"
#include "Aircraft.h"
#include "World.h"


class Player
{
    struct AircraftMover
    {
        XMFLOAT3 velocity;
        
        AircraftMover(float vx, float vy, float vz) : velocity(vx, vy, vz) {}

        void operator() (SceneNode& node, const GameTimer& gt) 
        {
            Aircraft& aircraft = static_cast<Aircraft&>(node);
            aircraft.move(velocity);
        }
        
    };

public:
    const float playerSpeed = 0.001f;

    void handleEvent(CommandQueue& commands);
    void handleRealtimeInput(CommandQueue& commands);

};

