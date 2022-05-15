#include "BattleField.h"

int BattleField::calcNavySize(int maxShipSize) const {
	int navySizeTemp = 0;
	for (int i = 1; maxShipSize != 0; maxShipSize--, i++) {
		navySizeTemp += i * maxShipSize;
	}
	return navySizeTemp;
}