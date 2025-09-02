// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño

#include <iostream>

#include "sharedFns.h"

// Passing by value (duplicates the value being passed)
//----------------------------------------------------------------------------------------------------

int square(int x) {
    x = x * x;
    return x;
}

// Passing by reference (uses the existing values without duplication)
//----------------------------------------------------------------------------------------------------

// The two functions below overload based on the parameters

// The parameters of the function below are pointers, so they need addresses to
// be passed Notice that x and y here are pointers that should be dereferenced
// in the code to get their values
void swap(int* x, int* y) {
    std::cout << "Executing swap with pointer function" << std::endl;
    int temp = *x;
    *x = *y;
    *y = temp;
}

// The parameters of the function below are references, passing the variables
// (not the addresses) will execute it Notice that x and y here become other
// variable names to the same value without any duplication
void swap(int& x, int& y) {
    std::cout << "Executing swap with alias function" << std::endl;
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    
    printSpacer();

    // Passing by value
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // Passing by reference
    swap(&a, &b);  // Executes the swap function with pointer parameters
    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(a, b);  // Executes the swap function with reference parameters
    std::cout << "a = " << a << ", b = " << b << std::endl;

    printSpacer();
    return 0;
}
