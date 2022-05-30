#pragma once
#include <iostream>
#include <stdexcept>
class View
{
public:
	bool isMultiplayer();
	std::string& const getPlayerName();
	void getNamesOfPlayers(std::string & name1, std::string & name2);
};

