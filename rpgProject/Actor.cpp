#include "Actor.h"

#include <iostream>

using std::cout;
using std::endl;

Actor::Actor(std::string name)
{
	this->name = name;
	int health{ 100 };
	int xp{ 0 };
}

Actor::Actor(std::string name, int health, int xp)
{
	this->name = name;
	this->health = health;
	this->xp = xp;
}

Actor::Actor(std::string name, int health, int mana, int xp)
{
	this->name = name;
	this->health = health;
	this->mana = mana;
	this->xp = xp;
}

std::string Actor::getName()
{
	return name;
}

int Actor::getHealth()
{
	return health;
}

int Actor::getMana()
{
	return mana;
}

int Actor::getXP()
{
	return xp;
}

void Actor::attack(Actor target)
{
	cout << this->getName() << " is attacking " << target.name << endl;
}

