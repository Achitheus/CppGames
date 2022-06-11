#pragma once
#include <iostream>
#include <stdexcept>
class View
{
public:
	bool enemyIsBot();
	std::string getPlayerName();
	void getNamesOfPlayers(std::string & name1, std::string & name2);
};

