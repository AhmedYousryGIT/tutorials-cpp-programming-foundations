// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Type Inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>
#include "sharedFns.h"

int main(){
    printSpacer();
    //auto must be initialized with a value.
    //Uncommenting the line below gives an error
    //auto score;
    auto score = 8;
    auto points = 12345678901;
    auto height = 6.2f;
    auto duration = 90.0;
    auto is_active = true;
    auto initial = 'P';
    auto title = "Soccer Champions";
    
    std::cout << "The type of score is " << typeid(score).name() << std::endl;
    std::cout << "The type of points is " << typeid(points).name() << std::endl;
    std::cout << "The type of height is " << typeid(height).name() << std::endl;
    std::cout << "The type of duration is " << typeid(duration).name() << std::endl;
    std::cout << "The type of is_active is " << typeid(is_active).name() << std::endl;
    std::cout << "The type of initial is " << typeid(initial).name() << std::endl;
    std::cout << "The type of title is " << typeid(title).name() << std::endl;
    
    printSpacer();
    return 0;
}
