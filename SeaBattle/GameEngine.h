#pragma once
#include "View.h"
#include "GameSession.h"



class GameEngine
{
	View view;
	GameSession gameSession;

public:
	GameEngine();
	
	void initGame();
	void startGame();
	
};



