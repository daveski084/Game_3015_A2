#pragma once
#include "Entity.h"
#include "CommandQueue.h"

class SpriteNode : public Entity
{
public:
    struct BackGroundMover
    {
        XMFLOAT3 velocity;
    
	    BackGroundMover(float vx, float vy, float vz) : velocity(vx, vy, vz){}
        void operator() (SceneNode& node, const GameTimer& gt) 
        {
            SpriteNode& spriteNode = static_cast<SpriteNode&>(node);
            spriteNode.move(velocity);
        }
    };

	SpriteNode(Game* game);
	void Update(const GameTimer gt);

	float backgroundSpeed;

private:
	virtual void drawCurrent() const;
	virtual void buildCurrent();
};
