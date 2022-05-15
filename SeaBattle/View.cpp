#include "View.h"

int View::reqNumbOfPlayers()
{
	int playersCount;
	std::cout << "Enter count of players (1 or 2): "; std::cin >> playersCount;
	if (playersCount != 1 && playersCount != 2) {
		throw std::invalid_argument("MyFunc argument too large.");
	}
	return playersCount;

}


