#pragma once

#include "Player.h"
#include "Bot.h"
#include <typeinfo>

class GameSession
{
	Player* player1;
	Player* player2;
	GameSession(GameSession const& obj) = default;
	
public:
	GameSession() : player1(new Player()), player2(new Player()) {};
	GameSession(std::string name)
		: player1(new Player(name)), player2(new Bot()) {}

	GameSession(std::string name1, std::string name2)
		: player1(new Player(name1)), player2(new Player(name2)) {}

	GameSession& operator = (GameSession const& obj) {
		if (&obj == this) return *this;

		if(typeid(*obj.player1) != typeid(*player1)) {
			delete player1;
			//player1 = new typeid(obj.player1)();
			player1 = (typeid(*obj.player1) == typeid(Bot)) ? new Bot() : new Player();
		}
		*player1 = *obj.player1;
		
		if (typeid(*obj.player2) != typeid(*player2)) {
			delete player2;
			//player2 = new typeid(obj.player2)();
			player2 = (typeid(*obj.player2) == typeid(Bot)) ? new Bot() : new Player();
		}
		*player2 = *obj.player2;

		return *this;
	};

	~GameSession() {
		delete player1;
		delete player2;
	}

	void startGame();

};

