#include "CharacterBase.h"

CharacterBase::CharacterBase(Vector2 size)
{
	body.w = size.x;
	body.h = size.y;
}

void CharacterBase::SetSpeed(int speed)
{
	m_movementSpeed = speed;
}

void CharacterBase::SetPosition(Vector2 position)
{
	body.x = position.x;
	body.y = position.y;
}

int CharacterBase::GetSpeed() const
{
	return m_movementSpeed;
}

SDL_Rect CharacterBase::GetBody() const
{
	return SDL_Rect();
}
