#pragma once
#include "characterBase.h"
#include "Utils/Vector2.h"

class Enemy : public CharacterBase
{
public:
	Enemy(Vector2 size);
	void Movement();
	
private:
	int m_fallSpeed;
};

