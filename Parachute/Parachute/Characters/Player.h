#pragma once
#include "characterBase.h"
#include "Controls/Controller.h"
#include "Controls/Direction.h"
#include "Utils/Vector2.h"

class Player : public CharacterBase
{
public:
	Player(Vector2 size);
	void Movement(Direction direction);

private:
	Controller controller;
};

