#include "game/weapon.h"

#include <iostream>

Weapon::Weapon(const std::string& weaponName, int weaponWeight,
               int weaponDamage)
    : Item(weaponName, weaponWeight), damage(weaponDamage) {
    std::cout << "Creating Weapon " << weaponName << std::endl;
}

void Weapon::use() const {
    std::cout << "Making damage with " << name << std::endl;
}

void Weapon::display() const {
    std::cout << std::endl;
    std::cout << "---------- Weapon ----------" << std::endl;
    std::cout << " Item:   " << name << std::endl;
    std::cout << " Weight: " << weight << " units" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << std::endl;
}
