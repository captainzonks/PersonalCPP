#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player
{
private:
    std::string name; // name of created entity
    int health; // health of created entity

public:
    // Constructor
    Player(std::string name, int health);
    
    // Copy Constructor
    Player(const Player& source);
    
    // Move Constructor
    Player(Player&& source) noexcept;
    
    // Destructor
    ~Player();
    
    void set_name(std::string name) {
        this->name = name;
    }
    
    std::string get_name() const {
        return name;
    }
    
    void set_health(int health) {
        this->health = health;
    }
    
    void display() const;

};

#endif // PLAYER_H
