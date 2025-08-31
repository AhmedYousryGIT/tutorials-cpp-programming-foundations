#include <iostream>
#include <string>
#include "sharedFns.h"

int main(){
    printSpacer();

    int num = 25;
    char action = 'x';

    //if, else if, else
    std::string msg;
    if(num < 0) 
        msg = "Negative Number";
    else if(num == 0)
        msg = "Zero";
    else {
        //Ternary operation (condition) ? true : false;
        msg = (num%2) ? "Positive Odd" : "Positive Even";
    }
    std::cout << msg << std::endl;
    
    //switch cases
    switch (action) {
        case 'X':
        case 'x':
        msg = "X Pressed";
        break;

        default:
        msg = "Not X";
        break;
    }
    std::cout << msg << std::endl;
    
    int romanNum = 2;
    msg = "";
    //Notice that when a condition is met all cases below it will be executed until you break out of the switch case
    switch(romanNum) {
        case 3:
        msg += 'i';
        case 2:         //Condition met here. All commands below will be executed without checking any other cases
        msg += 'i';
        case 1:
        msg += 'i';
        break;
    }
    std::cout << "In roman " << romanNum << " = " << msg << std::endl;

    
    printSpacer();
    return 0;
}
