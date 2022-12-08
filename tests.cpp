#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include <vector>
#include "funcs.h"

TEST_CASE("TASK A"){
    std::vector<int> test = makeVector(10);
    std::vector<int> test2 = makeVector(15);
    CHECK(test.size() == 10);
    CHECK(test2.size() == 15);
    CHECK(test.back() == 9);
    CHECK(test2.back() == 14);
}

TEST_CASE("Task B"){
    std::vector<int> sadVibes = { 1,2,-1,3,4,-1,6 };
    std::vector<int> test = goodVibes(sadVibes);

    CHECK(test.size() == 5);
    CHECK(test.front() == 1);
    CHECK(test.back() == 6);

    std::vector<int> sadVibes2 = { -1,2,-1,3,4,-1, -6 };
    std::vector<int> test2 = goodVibes(sadVibes2);

    CHECK(test2.size() == 3);
    CHECK(test2.front() == 2);
    CHECK(test2.back() == 4);
}

TEST_CASE("Task C"){
    std::vector<int> v1 = {1,2,3};
    std::vector<int> v2 = {4,5};

    gogeta(v1, v2);

    CHECK(v1.size() == 5);
    CHECK(v1.front() == 1);
    CHECK(v1.back() == 5);
    CHECK(v2.empty() == true);
}

TEST_CASE("Task D"){
    std::vector<int> v3 = {1, 2, 3};
    std::vector<int> v4 = {4, 5};
  
    std::vector<int> v = sumPairWise(v3, v4);

    CHECK(v.front() == 5);
    CHECK(v[1] == 7);
    CHECK(v.back() == 3);

    std::vector<int> v1 = {1, 2, 3, 4};
    std::vector<int> v2 = {5, 6, 7};
  
    std::vector<int> V = sumPairWise(v1, v2);

    CHECK(V.front() == 6);
    CHECK(V[1] == 8);
    CHECK(V[2] == 10);
    CHECK(V.back() == 4);
}