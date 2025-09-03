// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño

#include <iostream>
#include <string>
#include <vector>

#include "sharedFns.h"

std::string getPlayer(std::vector<std::string>* players, int pNum);
int getScore(int, int);
void displayScore(std::string&, int);

int main() {
    printSpacer();

    std::vector<std::string> players = {"Jack", "Alex", "Jason", "Randy"};
    std::string playerName = getPlayer(&players, 3);
    int score = getScore(75, 100);

    displayScore(playerName, score);

    printSpacer();
    return 0;
}

std::string getPlayer(std::vector<std::string>* players, int pNum) {
    if (players != nullptr && pNum > 0 && pNum <= players->size())
        return (*players)[pNum - 1];
    else
        return "Unregistered Player";
}

int getScore(int baseScore, int multiplier) { return baseScore * multiplier; }

void displayScore(std::string& playerName, int score) {
    std::cout << playerName << " scored " << score << " points." << std::endl;
}
