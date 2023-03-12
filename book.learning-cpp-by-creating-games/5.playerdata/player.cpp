#include <iostream>
using namespace std;

struct Player 
{
    string name;
    float hp;
    Vector positon;
};

int main() {
    Player me;
    me.name = "Volvet";
    me.hp = 100.0f  // .0f is because of float type
    me.position.x=0, me.position.y=0, me.position.z=0;
    
    Player* ptrMe; //declaring a pointer
    ptrMe = &me; //linkage. core step. memory access violation without it   
}

