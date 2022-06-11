#pragma once

class Cell;

class Ship {
	 
private:
	int _shipSize;
	bool status;
	int hitPoints;
public:
	Ship(int shipSize = 0) : _shipSize(shipSize), status(true), hitPoints(shipSize) {};
	
	void setShipSize(int shipSize) {
		_shipSize = shipSize;
	}
	Ship& operator = (Ship const& obj) {
		if (&obj != this) return *this;
		
		delete this;
		Ship ship = obj;
		return ship;
	}
};