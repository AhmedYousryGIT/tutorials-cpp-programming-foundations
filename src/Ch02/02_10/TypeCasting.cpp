// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include "sharedFns.h"

int main(){
    printSpacer();

    //Implicit casting:
    float my_float = 23.14; //This value is a double, but it will be implicitly cast into a float
    int my_int1 = my_float;
    std::cout << "my_float = " << my_float << "\nint my_int1 = my_float;\nmy_int1 = " << my_int1 <<"\nNotice that my_float was implicitly cast into an integer to match my_int type" << std::endl << std::endl;

    //Explicit casting
    //c-style casting:
    int my_int2 = (int) my_float;
    std::cout << "C-style method\nmy_int2 = (int) my_float;\nmy_int2 = " << my_int2 << std::endl << std::endl;


    //Modern C++ casting:
    int my_int3 = static_cast <int> (my_float);
    std::cout << "Modern C++ method\nmy_int3 = static_cast <int> (my_float);\nmy_int3 = " << my_int3 << std::endl << std::endl;
    
    printSpacer();
    return 0;
}
