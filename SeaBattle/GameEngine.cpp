#include "GameEngine.h"


GameEngine::GameEngine() : view(View()) {
	bool isMultiplayer;
	isMultiplayer = !view.enemyIsBot();
	
	if (isMultiplayer) {
		std::string name1stPl, name2ndPl;
		view.getNamesOfPlayers(name1stPl, name2ndPl);
		gameSession = GameSession(name1stPl, name2ndPl);
	}
	else {
		std::string playerName = view.getPlayerName();
		gameSession = GameSession(playerName);
	}
	
}

void GameEngine::initGame()
{
	
}
