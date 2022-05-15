#pragma once

#include "Player.h"

class GameSession
{
	int countOfPlayers;
	Player* players;
public:
	GameSession(int countOfPlayers = 1): countOfPlayers(countOfPlayers), players(new Player[2]) {

	}
	void startGame();

};

