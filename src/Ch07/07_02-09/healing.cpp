#include "game/healing.h"

#include <iostream>

Healing::Healing(const std::string& itemName, int itemWeight,
                 int itemStrength)
    : Item(itemName, itemWeight), strength(itemStrength) {
    std::cout << "Creating Healing Item: " << itemName << std::endl;
}

void Healing::use() const {
    std::cout << "Healing with " << name << std::endl;
}

void Healing::display() const {
    std::cout << std::endl;
    std::cout << "-------- Healing Item --------" << std::endl;
    std::cout << " Item:   " << name << std::endl;
    std::cout << " Weight: " << weight << " units" << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << std::endl;
}
