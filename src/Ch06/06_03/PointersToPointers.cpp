#include <iostream>
#include <string>

#include "sharedFns.h"

void deletPtr_improper(std::string* argPtr);
void deletePtr_proper(std::string** argPtr);

int main() {
    printSpacer();

    std::string* ptr1 = new std::string("ptr 1 original value");

    std::cout << "The memory address where the value is held:" << std::endl;
    std::cout << "ptr1 = " << ptr1 << std::endl << std::endl;

    std::cout << "The memory address of the pointer which holds the address of the value:" << std::endl;
    std::cout << "&ptr1 = " << &ptr1 << std::endl << std::endl;

    std::cout << "The stored value:" << std::endl;
    std::cout << "*ptr1 = " << *ptr1 << std::endl << std::endl;

    // Note that pointers are passed by value, so if you delete the argument
    // pointer the original one is left dangling
    deletPtr_improper(ptr1);
    // After deleting the argPtr of the function the value in the heap
    // memory is deleted, but we still have a problem. The ptr is now a
    // dangling pointer, though argPtr was set to nullptr. The reason is
    // argPtr was a copy of ptr, not a reference to it.

    std::cout << "After executing the improper delete function ptr1 " << ((ptr1 == nullptr) ? "is" : "isn't")
              << " a nullptr after setting argPtr to nullptr" << std::endl;

    // The previous example shows why passing by reference (using the &) is
    // preferred over passing the pointer itself (by value)
    // In Old C-style code this problem was resolved by using a double pointer
    ptr1 = new std::string("Some Value");
    std::string* ptr2 = ptr1;
    deletePtr_proper(&ptr2);
    std::cout << "After executing the proper delete function ptr2 " << ((ptr2 == nullptr) ? "is" : "isn't")
              << " a nullptr after setting argPtr to nullptr" << std::endl;

    // The line below will result in an error since the function successfully deleted ptr2 and its value
    // So now ptr1 is not pointing to anything.. (It is a dangling pointer)
    // std::cout << "After deleting ptr2 the value = " << *ptr1 << std::endl;

    // This is why the use of modern C++ smartPointers for memory management is a better solution

    printSpacer();
    return 0;
}

void deletPtr_improper(std::string* argPtr) {
    delete argPtr;
    argPtr = nullptr;
}

void deletePtr_proper(std::string** argPtr) {
    // The passed pointer is referred to as *argPtr
    delete *argPtr;     // deletes the value held by the passed pointer
    *argPtr = nullptr;  // sets the passed pointer to a null pointer
}