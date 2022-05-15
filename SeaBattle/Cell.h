#pragma once


#include <string>

class Ship;

class Cell {
	int x;
	int y;
	bool hited;
	Ship* ship;
	int stoi(std::string) {

	};
public:
	bool hitCell(int x, std::string letter) {
		hitCell(x, stoi(letter));
	};
	bool hitCell(int, int);
};