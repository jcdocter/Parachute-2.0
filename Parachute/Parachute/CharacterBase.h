#pragma once
#include "Utils/Vector2.h"
#include <SDL3/SDL_rect.h>

class CharacterBase
{
public:
	void SetSpeed(int speed);
	void SetPosition(Vector2 position);

	int GetSpeed() const;
	SDL_Rect GetBody() const;

protected:
	CharacterBase(Vector2 size);

private:
	SDL_Rect body;
	int m_movementSpeed = 1;
	Vector2 currentPosition;
};

