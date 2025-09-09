#ifndef WEAPON_H
#define WEAPON_H

#include "game/item.h"

// using public with inherited class establishes an is-a relation
// meaning all public classes in Item will be public in Weapon and 
// accessible in the interface

// using private with inherited class establishes a has-a relation
// meaning that all public classes are only accessible within the weapon
// but are not accessible in the interface

class Weapon : public Item {
private:
    int damage;
public:
    Weapon(const std::string&, int, int );
    /* Weapon(const std::string& weaponName, int weaponWeight, int weaponDamage)
    :Item(weaponName, weaponWeight), damage(weaponDamage){ } */
    void use() const override;
    void display() const override;
};

#endif  // WEAPON_H