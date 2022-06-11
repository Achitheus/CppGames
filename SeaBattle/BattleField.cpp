#include "BattleField.h"

int BattleField::calcNavySize(int maxShipSize) const {
	int navySize = 0;
	for (int i = 1; maxShipSize != 0; maxShipSize--, i++) {
		navySize += i * maxShipSize;
	}
	return navySize;
}

void BattleField::initNavy() 
{//if objects have const field "SHIP_SIZE" (different values inside) how to make dynamic array?
	navy = new Ship[NAVY_SIZE];
	
	for (int i = 0; i < NAVY_SIZE; i++) {
		navy[i].setShipSize(MAX_SHIP_SIZE - i);
	}
}
