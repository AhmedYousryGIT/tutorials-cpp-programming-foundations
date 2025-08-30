// Complete Guide to C++ Programming Foundations
// Challenge Solution 04_12
// Vector Manipulation, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>

std::vector<int> SelectKeyPoints(std::vector<int> distances, int checkpointIndex){
    std::vector<int> result;
    /*My Solution
    result = {distances[0], distances[checkpointIndex], distances[distances.size()-1]};
    */

    //Another Solution
    result.push_back(*distances.begin());   //OR:   result.push_back(distances.front());
    result.push_back(distances[checkpointIndex]);
    result.push_back(*(distances.end()-1)); //OR:   result.push_back(distances.back());
    
    //Notice that .front(), and .back() do not need dereferencing
    //while .begin(), .end() need dereferencing.
    //Also .end() returns the pointer for the next value to be added not the last existing value like .back()

    return result;
}

int main(){
    std::vector<int> distances = {3, 5, 4, 6, 7, 8};
    int checkpointIndex = 4;

    std::vector<int> learnerResult = SelectKeyPoints(distances, checkpointIndex);
    std::cout << "Your code returned: { ";
    auto vectPtr = learnerResult.begin();
    while (vectPtr != learnerResult.end()){
        std::cout << *vectPtr << " ";
        vectPtr = next(vectPtr, 1);
    }
    std::cout << "}" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
