// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include "sharedFns.h"

enum class asset_type {texture, sound, animation, script};
enum class another_type {sound, image, data};

int main(){

    printSpacer();
    
    asset_type asset_value;
    asset_value = asset_type::sound;
    std::cout << "asset_value::sound = " << (int)asset_value << std::endl;
    
    //The block below fails, you cannot reassign the same variable with another enum type
    /*
    another_type asset_value;
    asset_value = another_type::sound;
    std::cout << "asset_value::sound = " << (int)asset_value << std::endl;
    */
   
    printSpacer();
    return 0;
}
