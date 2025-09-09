// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño

#include <iostream>
#include <memory>

#include "game/healing.h"
#include "game/inventory.h"
#include "game/weapon.h"
#include "sharedFns.h"

int main() {
    printSpacer();

    std::cout << std::endl
              << "Creating Items" << std::endl
              << "---------------" << std::endl;

    std::unique_ptr<Weapon> sword =
        std::make_unique<Weapon>("Mighty Sword", 1000, 150);
    sword->use();
    sword->display();

    std::unique_ptr<Healing> hPotion =
        std::make_unique<Healing>("Healing Potion", 100, 500);
    hPotion->use();
    hPotion->display();

    std::cout << std::endl
              << "Creating Inventory of Items" << std::endl
              << "----------------------------" << std::endl;

    Inventory myInv(5);
    myInv += "Sword";
    myInv += "Shield";
    myInv += "Bow";
    myInv += "Arrow";
    myInv += "Health";

    // Adding another item will exceed the maximum capacity
    myInv.displayInventory();
    myInv += "Lantern";
    myInv -= "Banana";
    myInv -= "Health";
    myInv += "Booster";
    std::cout << "You currently have " << myInv.getItemsCount()
              << " items in your inventory" << std::endl;
    std::cout << "The updated list of items is " << std::endl;
    myInv.displayInventory();
    std::cout << "The third inventory item is " << myInv[2]
              << std::endl;
    std::cout << "There is no 6th item, the returned value is "
              << myInv[5] << std::endl;

    printSpacer();
    return 0;
}
