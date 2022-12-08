#include <iostream>
#include <vector>
#include "funcs.h"
using namespace std;

int main(){
    //TASK A
    cout << "TASK A\n------------------------------\n";
    std::vector<int> numberLine = makeVector(10);
    cout << "Vector of 10: " << endl;
    for (int i = 0; i < numberLine.size(); i++){
        cout << numberLine[i] << " ";
    }
    cout << endl;

    //TASK B
    cout << "\nTASK B\n------------------------------\n";
    std::vector<int> sadVibes = { 1,2,-1,3,4,-1,6 };

    std::vector<int> betterVibes = goodVibes(sadVibes); // returns [1,2,3,4,6]
    for (int i = 0; i < betterVibes.size(); i++){
        cout << betterVibes[i] << " ";
    }
    cout << endl;

    //TASK C
    cout << "\nTASK C\n------------------------------\n";
    std::vector<int> v1 = {1,2,3};
    std::vector<int> v2 = {4,5};

    gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
  
    cout << v1.size() << endl;
    cout << v2.size() << endl;
    cout << "Is v2 empty?: " << boolalpha << v2.empty() << endl;

    //TASK D
    cout << "\nTASK D\n------------------------------\n";
    std::vector<int> v3 = {1, 2, 3};
    std::vector<int> v4 = {4, 5};
  
    std::vector<int> v = sumPairWise(v3, v4); // returns [5, 7, 3]
  
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Notes:

INITIALIZATION:

std::vector<int> v; // creates a vector of int called v

or 

vector<int> v{10, 20, 30}; // v initialized elements[10, 20, 30]


To add an element to a vector, use the push_back(element) method, where element is a value of the same type as the vector. 

Example:

vector<int> v;     
v.push_back(10); 
v.push_back(20); 
v.push_back(30);
// v now contains elements [10, 20, 30]

v[i] ->access value at index i
at(i) -> same as ^ but it checks range and throws an exception when trying to access nonexitent element
front() -> returns a reference to the first element in the vector
back() -> returns a reference to the last element in the vector

Size vs Capacity: The size of a vector is the number of elements in the vector. The capacity of a vector is the storage space currently allocated to the vector.

size() -> returns # of elements in the vector
capacity() -> returns number of elements the vector can hold before more memory must be allocated
empty() -> returns true if the size is 0.

Mutators (also known as setters or modifiers):
-> push_back(n) adds element n at the back (end) of the vector.
-> pop_back() removes the last element in the vector.
-> clear() removes all elements from the vector. 
*/