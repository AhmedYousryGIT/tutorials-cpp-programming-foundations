#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
protected:
    std::string name;
    int weight;

public:
    Item(const std::string& _name, int _weight);
    ~Item();
    virtual void use() const;
    std::string getName();
    int getWeight();
    // the virtual at the start and = 0 at the end
    // Make the whole Class Abstract
    virtual void display() const = 0;
};

#endif  // ITEM_H