// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>
#include "sharedFns.h"

int main(){
    printSpacer();

    const size_t LENGTH = 50;
    char racer1[] = "Speedy";
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];

    //strncpy(the destination variable to be modified,
    //        the string to be copied to the destination,
    //        the maximum size of characters that could be safely copied )
    strncpy(racer2, "Lightning", sizeof(racer2) - 1);
    //Explicitly add the null character to avoid string related issues
    racer2[sizeof(racer2) - 1] = '\0';

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    strncpy(raceResult, "And the winner is ", sizeof(raceResult) - 1);
    raceResult[sizeof(raceResult) - 1] = '\0';

    //strncat(the destination variable to be modified,
    //        the string to be added to the destination,
    //        the maximum size of characters to be concatinated )
    strncat(raceResult, racer1, sizeof(raceResult) - strlen(raceResult) - 1);
    std::cout << raceResult << std::endl;

    printSpacer();
    return 0;
}
