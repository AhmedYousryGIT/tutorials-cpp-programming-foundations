// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>
#include "sharedFns.h"

int main(){
    printSpacer();
    
    std::vector<std::complex<double>> complexNums;
    
    complexNums.push_back(std::complex<double>(1.1, 1.2));
    complexNums.push_back(std::complex<double>(2.1, 2.2));
    complexNums.push_back(std::complex<double>(3.1, 3.2));
    complexNums.push_back(std::complex<double>(4.1, 4.2));
    
    //vector.begin(), vector.end() return pointers
    std::cout << "The Real number of the first entry is " << complexNums.begin()->real() << std::endl;
    //Notice that vector.end() returns a pointer to the next item after the last entered item
    //And since the returned value is a pointer the we can move up and down by adding / subtracting the number of steps
    std::cout << "The Imaginary number of the last entry is " << (complexNums.end()-1)->imag() << std::endl;
    //Ther prev() function can also be used to move through the vectors
    std::cout << "The Real number before last entry is " << prev(complexNums.end(), 2)->real() << std::endl;
    //The [] notation returns the object itself, not a pointer. So it should be accessed with . not ->
    std::cout << "The Imaginary number of the first entry is " << complexNums[0].imag() << std::endl;
    
    printSpacer();
    return 0;
}
