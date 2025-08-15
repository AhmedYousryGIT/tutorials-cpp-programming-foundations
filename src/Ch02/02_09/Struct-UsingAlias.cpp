// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "sharedFns.h"

//This is used to alias the type of the variable.
//It is very useful if you want to assure that some variables are of the same type
//This way if you change the value of the alias, all variables are changed accordingly
using PosInt = unsigned int;
PosInt a = 5;
PosInt b = 10;

enum class character_role {protagonist, antagonist, sidekick, npc};

struct Player {
    std::string name;
    int level;
    character_role role;
};

int main(){
    printSpacer();
    
    Player hero;
    hero.name = "Gerald";
    hero.level = 30;
    hero.role = character_role::protagonist;
    
    std::cout << "The main character's name is " << hero.name << "and his current level is " << hero.level << std::endl;

    printSpacer();
    return 0;
}
