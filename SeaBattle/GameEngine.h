#pragma once
#include "View.h"
#include "GameSession.h"

class GameEngine
{
	View view;
	GameSession gameSession;
public:
	GameEngine(): view(View()), gameSession(GameSession()) {
		

	}
	
	void startGame();
};

void initGame();

