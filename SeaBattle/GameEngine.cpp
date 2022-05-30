#include "GameEngine.h"


GameEngine::GameEngine() : view(View()) {
	bool isMultiplayer = view.isMultiplayer();
	if (isMultiplayer) {
		std::string name1stPl, name2ndPl;
		view.getNamesOfPlayers(name1stPl, name2ndPl);
	}
	else {

	}
	
	
	
	//gameSession = GameSession(numbOfPlayers, );
}

void GameEngine::initGame()
{
	
}
