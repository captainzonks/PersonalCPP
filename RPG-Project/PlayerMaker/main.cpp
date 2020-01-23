#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main() {
    
    cout << "**************PLAYER CREATOR**************" << endl;
    cout << "\nWelcome to the Player Creator" << endl;
    cout << endl;
    cout << "What would you like to name your new Player? ";
    
    string name;
    cin >> name;
    Player PC{"", 100};
    PC.set_name(name);
    
    cout <<"\nYour new Player has been created." << endl;
    cout << endl;
    PC.display();
    
    cout << endl;
    return 0;
}