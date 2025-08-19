// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>
#include "sharedFns.h"

int main(){
    printSpacer();
    
    int scoresArr[] = {320, 510, 125, 460};
    //When assigning a pointer to an array value don't use the & since the array is already
    //an address to a value
    int *arrPtr = scoresArr;
    std::cout << "A pointer by default points to the first element in the array" << std::endl;
    std::cout << "*arrPtr = " << *arrPtr << std::endl << std::endl;

    std::cout << "To get the second element you can dereference the pointer + 1" << std::endl;
    std::cout << "*(arrPtr + 1) = " << *(arrPtr + 1) << std::endl << std::endl;

    std::cout << "When using an array pointer, you can access an element with the array notation" << std::endl;
    std::cout << "arrPtr[2] = " << arrPtr[2] << std::endl << std::endl;
    
    //If you want to assign the pointer to a certain element in the array then you should use
    //the & with the element you want
    arrPtr = &scoresArr[3];
    std::cout << "arrPtr = &scoresArr[3];" << std::endl;
    std::cout << "The pointer now points to an integer not the array itself" << std::endl;
    std::cout << "*arrPtr = " << *arrPtr << std::endl;

    printSpacer();
    return 0;
}
