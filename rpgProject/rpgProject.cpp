// MAIN

#include <iostream>

#include "Actor.h"

using namespace std;

int main()
{
    Actor Player{ "Hero", 100, 100, 0 };

    cout << Player.getName() << endl;
    cout << Player.getHealth() << endl;
    cout << Player.getMana() << endl;
    cout << Player.getXP() << endl;

    Actor Enemy{ "Enemy", 100, 100, 0 };

    Player.attack(Enemy);

}
