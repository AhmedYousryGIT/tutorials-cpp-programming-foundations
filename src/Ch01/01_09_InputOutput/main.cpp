// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "sharedFns.h"

int main(){
    std::string name;
    std::cout << "Please enter your name: " << std::flush;
    std::cin >> name;
    std::cout << "Welcome " << name << std::endl;

    printFooter();
    return 0;
}