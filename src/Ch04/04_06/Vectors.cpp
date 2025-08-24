// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 
#include <cinttypes>
#include <vector>
#include <iostream>
#include <string>
#include "sharedFns.h"

int main(){
    printSpacer();
    
    std::vector<std::string> places = {"UNDETERMINED", "Australia", "New Zealand"};
    //The line below causes an error. Do not add new entries with []. use push_back() instead
    //places[4] = "Georgia";
    places.push_back("Georgia");
    //You can use the [] to modify entries though.
    places[0] = "Canada";
    
    
    int8_t i = 0;
    for (std::string place : places) {
        i++;
        if(i>1) {
            (i < places.size())? (std::cout << ", ") : (std::cout << " and "); 
        }
        std::cout << place;
    }
    std::cout << "." << std::endl;

    printSpacer();
    return 0;
}
