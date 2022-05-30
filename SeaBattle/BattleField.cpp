#include "BattleField.h"

int BattleField::calcNavySize(int maxShipSize) const {
	int navySize = 0;
	for (int i = 1; maxShipSize != 0; maxShipSize--, i++) {
		navySize += i * maxShipSize;
	}
	return navySize;
}