// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono>
#include "sharedFns.h"

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    printSpacer();
    
    TimePoint *start, *end;
    //We initialize a Duration object so that we could subtract two TimePoint objects with
    //an overrided subtraction operator
    Duration *elapsed_seconds = new Duration();
    std::string input;
    
    start = new TimePoint(Clock::now());
    
    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;
    
    end = new TimePoint(Clock::now());
    *elapsed_seconds = *end - *start;
    
    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl;
    
    printSpacer();
    return 0;
}
