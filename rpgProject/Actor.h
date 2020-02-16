#pragma once

#include <string>

class Actor
{
public:

	// constructors
	Actor(std::string name);
	Actor(std::string name, int health, int xp);
	Actor(std::string name, int health, int mana, int xp);

	// getters
	std::string getName();
	int getHealth();
	int getMana();
	int getXP();

	// moves (temporary)
	void attack(Actor target);

private:
	std::string name{};
	int health{};
	int mana{};
	int xp{};

};

