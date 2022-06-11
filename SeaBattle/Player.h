#pragma once
#include <string>
#include "BattleField.h"

class Player {
	std::string name;
	BattleField battleField;
public:
	Player() : Player("") {}
	Player(std::string name) : name(name), battleField(BattleField()) {
	}

	
	Player& operator = (Player const & obj) {
		if (&obj == this) return *this;
		name = obj.name;
		battleField = obj.battleField;
		return *this;
	}
	virtual ~Player() = default;
};