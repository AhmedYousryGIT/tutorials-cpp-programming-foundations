// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <cmath>
#include "sharedFns.h"

int main(){
    printSpacer();

    int fahrenheit = 100;
    int celsius;

    std::cout << "Notice that int/int returns an int accordingly " << "3/4 = " << 3/4 << " which is the integer part of the result" << std::endl << std::endl;
    std::cout << "In order to fix this you must cast the integers to foats or use the float notation" << std::endl;
    std::cout << "In this example we will use both methods for demonstration\nstatic_cast <float> (3.0)/4.0f = " << static_cast <float> (3.0)/4.0f << std::endl << std::endl;


    
    std::cout << "Notice that casting one of the numbers will also solve the issue"<< std::endl;
    celsius = (static_cast<float>(5)/9) * (fahrenheit-32);
    std::cout << "celsius = (static_cast<float>(5)/9) * (fahrenheit-32);"<< std::endl;
    std::cout << "celsius = " << celsius << std::endl;
    std::cout << "See how celsius truncates the result and only takes its integer part as it was initially declared as int" << std::endl;
    
    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "float wight                   = " << weight << std::endl;
    std::cout << "Integer part                  = " << static_cast <int> (weight) << std::endl;
    std::cout << "Fractional part to two places = " << static_cast<int>(weight*std::pow(10, 2))%(int)(std::pow(10, 2)) << std::endl;
    std::cout << "Notice that the fractional part is not accurate. This is because weight was initially declared weight as a float and floats lack precision for the sake of a data size.\nIf we declare weight as double, we will get a more accurate result" << std::endl;

    printSpacer();
    return 0;
}
