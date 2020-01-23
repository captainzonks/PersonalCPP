#include <iostream>
#include "Player.h"

// Constructor
Player::Player(std::string name, int health)
    : name{name}, health{health}
{
}

// Copy Constructor
Player::Player(const Player& source)
    : Player {source.name, source.health}
{
}

// Move Constructor
Player::Player(Player&& source) noexcept
    : data {source.data} {
        source.data = nullptr;
}

// Destructor
Player::~Player()
{
}

// Display Function
void Player::display() const {
    std::cout << name << " has " << health << " HP." << std::endl;
}