#include "game/item.h"

#include <iostream>

Item::Item(const std::string& _name, int _weight)
    : name(_name), weight(_weight) {}

Item::~Item() {}
void Item::use() const {
    std::cout << "Using " << name << std::endl;
}
std::string Item::getName() {
    return name;
}
int Item::getWeight() { 
    return weight;
}