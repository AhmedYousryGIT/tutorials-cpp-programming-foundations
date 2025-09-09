// Complete Guide to C++ Programming Foundations
// Challenge 07_10
// Design a Person Class, by Eduardo Corpeño

#include <cstdint>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

class Person {
private:
    std::string name;
    float energy;
    float happiness;
    float health;
    float clamp(float value, float min = 0, float max = 100) {
        if (value < 0) value = 0;
        else if (value > 100) value = 100;
        else value = value;

        return value;
    }

public:
    Person(const std::string& name, float energy, float happiness,
           float health)
        : name(name),
          energy(energy),
          happiness(happiness),
          health(health) {}
    void eat(float calories) {
        energy = clamp(energy + calories * 7.0 / 200.0);
    }
    void play(float minutes) {
        happiness = clamp(happiness + minutes / 2.0);
        energy = clamp(energy - minutes / 3.0);
    }
    void sleep(float hours) {
        energy = clamp(energy + hours * 3.75);
        health = clamp(health + hours * 2.5);
    }
    float getEnergy() const {
        return energy;
    }
    float getHappiness() const {
        return happiness;
    }
    float getHealth() const {
        return health;
    }
};

int main() {

////// Example 1 //////////////////////////////////////////////////////
    std::string name = "Alice";
    float energy = 40;
    float happiness = 22;
    float health = 80;

    float calories = 300;
    float playMinutes = 120;
    float sleepHours = 5;

    Person sporty(name, energy, happiness, health);
    sporty.eat(calories);
    sporty.play(playMinutes);
    sporty.sleep(sleepHours);

    std::cout << name << std::endl;
    std::cout << "Your code returned: { ";
    std::cout << "Energy: " << sporty.getEnergy() << ", ";
    std::cout << "Happiness: " << sporty.getHappiness() << ", ";
    std::cout << "Health: " << sporty.getHealth() << " }"
    << std::endl;
    std::cout << std::endl << std::endl;

////// Example 2 //////////////////////////////////////////////////////
    name = "Joe";
    energy = 50;
    happiness = 70;
    health = 60;
    calories = 1000;
    playMinutes = 60;
    sleepHours = 8;

    Person lazy(name, energy, happiness, health);
    lazy.eat(calories);             //energy = 85
    lazy.play(playMinutes);         //happiness = 52, energy = 65
    lazy.sleep(sleepHours);         //energy = 95, health = 80

    std::cout << name << std::endl;
    std::cout << "Your code returned: { ";
    std::cout << "Energy: " << lazy.getEnergy() << ", ";
    std::cout << "Happiness: " << lazy.getHappiness() << ", ";
    std::cout << "Health: " << lazy.getHealth() << " }"
              << std::endl;
    std::cout << std::endl << std::endl;

    return 0;
}