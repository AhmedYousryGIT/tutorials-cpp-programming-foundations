// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>
#include "sharedFns.h"

//You can declare multiple variables in one line however note that the assigned value is only assigned to the last variable. In the example below only b is set to 5 and a remains with its default value 0
int a , b = 5;

int main(){
    printSpacer();

    //The default value of a flag is false, however if you try to print it, it will be cast to 0
    //Below we used as ternary conditional operator to print true / false
    bool flag;
    std::cout << "The default value of a boolean is " << (flag?"true":"false") << std::endl<<std::endl;
    
    //An unsigned int will always give a positive number.
    //If you try to set it to a negative number it performs the wrapping behavior, where -1 becomes the maximum unsigned integer value, and -6 becomes UINT_MAX - 5
    unsigned int positiveNum;
    a--;
    positiveNum = a;
    std::cout << "positiveNum = a\na = " << a << "\nThough positiveNum = a, however since it is defined as unsigned int the -1 is wrapped to become " << positiveNum << " which is the maximum int" << std::endl<<std::endl;
    
    positiveNum = a - b;
    std::cout << "Now a - b = " << a - b << ", but again positiveNum is wrapped to become " << positiveNum << " which is the maximum int - 5" << std::endl;

    printSpacer();
    return 0;
}
