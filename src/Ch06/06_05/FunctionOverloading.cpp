// Complete Guide to C++ Programming Foundations
// Exercise 06_05
// Overloading Functions, by Eduardo Corpeño

#include <iostream>
#include <string>

#include "sharedFns.h"

// Function to get the speed of a player
int getSpeed(int distance, int time) { return distance / time; }

// Overloaded with different argument type
double getSpeed(double distance, int time) { return distance / time; }

// Overloaded with different number of arguments
std::string getSpeed(double distance, int time, const std::string& unit) {
    std::string msg = "The speed is " + std::to_string(distance / time) + " " + unit;
    return msg;
    // Notice that the compiler optimizes the returned string, so there is no duplication of data
    // It knows that msg will be returned to speedStr, so the string is already composed in speedStr
    // msg here just acts as an alias
}

int main() {
    printSpacer();
    int speedInt;
    double speedDbl;
    std::string speedStr;

    speedInt = getSpeed(200, 4);
    std::cout << "Speed (int): " << speedInt << std::endl;

    speedDbl = getSpeed(50.0, 4);
    std::cout << "Speed (double): " << speedDbl << std::endl;

    speedStr = getSpeed(200, 3, "m/sec");
    std::cout << "Speed (string): " << speedStr << std::endl;

    printSpacer();
    return 0;
}
