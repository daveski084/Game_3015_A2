#pragma once
#include "Entity.h"
#include <string>

class Aircraft : public Entity
{
public:
	enum Type
	{
		Eagle,
		Raptor,
	};
	
	Aircraft(Type type, Game* game);
	unsigned int getCategory() const;
	
private:

	virtual void buildCurrent();
	Type mType;
	std::string mSprite;
};
