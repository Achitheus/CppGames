#pragma once
#include "Cell.h"
#include "Ship.h"

class BattleField {
	int const FIELD_SIDE_SIZE;
	Cell* cells;
	int const MAX_SHIP_SIZE;
	int const NAVY_SIZE;
	Ship* navy;

	int calcNavySize(int maxShipSize) const;
public:
	BattleField() : FIELD_SIDE_SIZE(10), cells(new Cell[pow(FIELD_SIDE_SIZE,2)]), 
					MAX_SHIP_SIZE(4), NAVY_SIZE(calcNavySize(MAX_SHIP_SIZE)) {

	}


	Cell* getCell(int, int);
	void initFieldAndShips();
	

};