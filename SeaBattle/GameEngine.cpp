#include "GameEngine.h"

void initGame()
{
	View view;
	unsigned int numbOfPlayers;
	numbOfPlayers = view.reqNumbOfPlayers();
	std::string name1stPl, name2ndPl;
	view.reqNamesOfPlayers(name1stPl, name2ndPl);
}
