#pragma once
#include <string>
#include "BattleField.h"

class Player {
	std::string name;
	BattleField battleField;
public:
	Player() : name(name), battleField(BattleField()) {

	}
};