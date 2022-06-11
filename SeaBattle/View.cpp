#include "View.h"

bool View::enemyIsBot()
{
	int playersCount;
	std::cout << "Enter count of players (1 or 2): "; std::cin >> playersCount;
	if (playersCount != 1 && playersCount != 2) {
		throw std::invalid_argument("MyFunc argument too large.");
	}
	if (playersCount == 2) {
		return false;
	}
	return true;
}

std::string View::getPlayerName()
{
	std::string name;
	std::cout << "please enter your name" << std::endl;
	std::cin >> name;
	return name;
}

void View::getNamesOfPlayers(std::string & name1, std::string & name2)
{
	std::cout << "1st player please enter your name" << std::endl;
	std::cin >> name1;
	std::cout << "2nd player please enter your name" << std::endl;
	std::cin >> name2;
}




