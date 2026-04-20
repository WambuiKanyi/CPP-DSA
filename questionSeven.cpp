//Codility Question
// you can use includes, for example:
#include <set>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    set<long long> distinct;

    for (int i = 0; i < (int)A.size(); i++) {
        distinct.insert(abs((long long)A[i]));
    }

    return distinct.size();
}