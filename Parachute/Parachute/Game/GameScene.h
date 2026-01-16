#pragma once
#include <SDL3/SDL.h>
#include <Characters/Player.h>

class GameScene
{
public:
	void Initialize();
	void Run();

private:
	Player m_player;
};

