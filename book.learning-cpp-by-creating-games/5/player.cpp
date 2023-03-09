#include <iostream>
using namespace std;

// Define a C++ data struct for a Player object. Then, create an instance of your Player class and fill each of the data members with values.

struct Player 
{
    string name;
    int hp;
    Vector positon;
};

int main() {
    Player me;
    me.name = "Volvet";
    me.hp = 100
    me.position.x=0, me.position.y=0, me.position.z=0;
}

