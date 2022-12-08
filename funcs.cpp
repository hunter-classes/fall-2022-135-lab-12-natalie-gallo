#include <iostream>
#include <vector>
#include "funcs.h"
using namespace std;

//TASK A
std::vector<int> makeVector(int n){
    std::vector<int> numberline;
    for (int i = 0; i < n; i++){
        numberline.push_back(i);
    }
    return numberline;
}

//TASK B
std::vector<int> goodVibes(const std::vector<int>& v){
    std::vector<int> fixed;
    for (int i = 0; i < v.size(); i++){
        if (v.at(i) > 0){
            fixed.push_back(v[i]);
        }
    }
    return fixed;
}

//TASK C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for (int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta.at(i));
    }
    vegeta.clear();
}

//TASK D
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> sums;
    int size;

    if (v1.size() > v2.size()){
        size = v1.size();
    } else {
        size = v2.size();
    }

    for (int i = 0; i < size; i++){
        if (i > v1.size() - 1){
            sums.push_back(v2.at(i));
        } else if (i > v2.size() - 1){
            sums.push_back(v1.at(i));
        } else {
            sums.push_back(v1[i] + v2[i]);
        }
    }

    return sums;
}