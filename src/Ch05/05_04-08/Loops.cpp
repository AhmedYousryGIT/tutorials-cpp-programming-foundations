#include <iostream>
#include <vector>

#include "sharedFns.h"

int main() {
    printSpacer();

    std::vector<int> playerScores = {12, 25, 31, 50, 58, 10};

    // For Loop
    int lowestScore = INT_MAX;
    for (size_t i = 0; i < playerScores.size(); i++) {
        if (playerScores[i] < lowestScore) lowestScore = playerScores[i];
    }
    std::cout << "The lowest score is " << lowestScore << std::endl;

    // Ranged For Loop (Like for-in loops)
    int highestScore = 0;
    for (int score : playerScores) {
        if (score > highestScore) highestScore = score;
    }
    std::cout << "The highest score is " << highestScore << std::endl;

    // while loop
    auto scorePtr = playerScores.begin();
    double avg = 0;
    while (scorePtr != playerScores.end()) {
        avg += *scorePtr;
        scorePtr = next(scorePtr, 1);
    }
    avg /= playerScores.size();
    std::cout << "The average score is " << avg << std::endl;

    // do-while loop guarantees at least one iteration
    int i = 0;
    std::cout << "The scores are ";
    do {
        std::cout << playerScores[i] << " ";
        i++;
    } while (i < playerScores.size());
    std::cout << std::endl;

    printSpacer();
    return (0);
}