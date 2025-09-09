#ifndef INVENTORY_H
#define INVENTORY_H

#include <algorithm>
#include <cinttypes>
#include <iostream>
#include <string>
#include <vector>
class Inventory {
private:
    int maxCapacity;
    std::vector<std::string>* items;
    void init();

public:
    Inventory();
    Inventory(int maximumCapacity);
    ~Inventory();

    Inventory& operator+=(const std::string& item);
    Inventory& operator-=(const std::string& item);
    std::string operator[](uint8_t index) const;
    void displayInventory() const;
    int getItemsCount() const;
};

#endif  // INVENTORY_H