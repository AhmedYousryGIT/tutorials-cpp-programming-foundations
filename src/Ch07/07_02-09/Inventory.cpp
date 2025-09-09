#include "game/inventory.h"

// Private Functions
void Inventory::init() {
    items = new std::vector<std::string>();
}

// Public Functions

Inventory::Inventory()
    // You can use the : to initialize values outside the body of the
    // function
    : maxCapacity(10) {
    init();
}
Inventory::Inventory(int maximumCapacity)
    : maxCapacity(maximumCapacity) {
    init();
}
Inventory::~Inventory() {
    delete items;
}
Inventory& Inventory::operator+=(const std::string& item) {
    if (items->size() < maxCapacity) {
        items->push_back(item);
        std::cout << "Item ( " << item
                  << " ) has been added to your inventory"
                  << std::endl;
    }
    std::cout << "Inventory full, unable to add ( " << item << " )"
              << std::endl;
    return *this;
}

Inventory& Inventory::operator-=(const std::string& item) {
    auto itmPtr = std::find(items->begin(), items->end(), item);
    if (itmPtr != items->end()) {
        items->erase(itmPtr);
    }
    std::cout << "Item ( " << item << " ) not found in the inventory"
              << std::endl;
    return *this;
}

std::string Inventory::operator[](uint8_t index) const {
    if (index < items->size()) {
        return (*items)[index];
    }
    std::cout << "Index out of bounds" << std::endl;
    return "";
}

void Inventory::displayInventory() const {
    /*
    std::cout << "[";
    for (std::string& i : *items) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
     */

    std::cout << "[";
    for (uint8_t i = 0; i < items->size(); i++) {
        std::cout << (*items)[i] << " ";
        if (i < items->size() - 1) std::cout << " ,";
    }
    std::cout << "]" << std::endl;
}

int Inventory::getItemsCount() const {
    return items->size();
}