#pragma once
#include "SceneNode.h"
#include "Aircraft.h"
#include "SpriteNode.h"
#include "CommandQueue.h"


class World 
{
public:
	explicit World(Game* window);
	void update(const GameTimer& gt);
	void draw();

	//void loadTextures();
	void buildScene();
	CommandQueue& getCommandQueue();
	

private:
	enum Layer
	{
		Background,
		Air,
		LayerCount
	};

private:
	Game* mGame;

	SceneNode* mSceneGraph;
	std::array<SceneNode*, LayerCount> mSceneLayers;

	XMFLOAT4 mWorldBounds;
	XMFLOAT2 mSpawnPosition;

	// Entities
	Aircraft* mPlayerAircraft;
	SpriteNode*	mBackground;
	Aircraft* mEnemy;
	
	float mScrollSpeed;
	XMFLOAT3 aircraftSize;
	XMFLOAT3 enemySize;
	CommandQueue cQueue;
};
