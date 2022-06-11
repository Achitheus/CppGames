#pragma once
#include "Cell.h"
#include "Ship.h"

class BattleField {
	int const SIDE_SIZE;
	Cell* cells;
	int const MAX_SHIP_SIZE;
	int const NAVY_SIZE;
	Ship* navy;

	int calcNavySize(int maxShipSize) const;
	void initNavy();
public:
	BattleField(int sideSize = 10, int maxShipSize = 4) 
					: SIDE_SIZE(sideSize), cells(new Cell[pow(SIDE_SIZE,2)]), 
					  MAX_SHIP_SIZE(maxShipSize), NAVY_SIZE(calcNavySize(MAX_SHIP_SIZE)) 
	{
		initNavy();
	}

	BattleField(BattleField const& obj) 
		: SIDE_SIZE(obj.SIDE_SIZE), MAX_SHIP_SIZE(obj.MAX_SHIP_SIZE),
		  NAVY_SIZE(obj.NAVY_SIZE)
	{

	}

	BattleField& operator = (BattleField const& obj) {
		if (this == &obj) return *this;
		delete this;
		BattleField newObj = BattleField();
		for (int i = 0; i < newObj.SIDE_SIZE; i++)
			newObj.cells[i] = obj.cells[i];
		for (int i = 0; i < newObj.NAVY_SIZE; i++) {
			newObj.navy[i] = obj.navy[i];
		}
		return newObj;
	}

	Cell* getCell(int, int);
	void initFieldAndShips();
};