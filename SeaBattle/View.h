#pragma once
#include <iostream>
#include <stdexcept>
class View
{
public:
	int reqNumbOfPlayers();
	void reqNamesOfPlayers(std::string&, std::string&);
};

