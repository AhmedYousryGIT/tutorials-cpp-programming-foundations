// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include "sharedFns.h"

//comment the line below to stop debugging functions
#define DEBUG

const uint16_t MAX_AMMO = 500;

int main(){
    printSpacer();
    
    int32_t ammo = 100;
    uint8_t health_items = 5;

//Debugging block of code. Only runs if DEBUG is defined
#ifdef DEBUG:
    std::cout << "[DEBUG] Debugging mode" << std::endl;
#endif

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items
    
    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;
    
    printSpacer();
    return 0;
}
