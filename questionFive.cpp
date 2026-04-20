// Question 5 Pseudocode to C++
#include <iostream>
using namespace std;

int main() {
    double x = 0, y = 20;

    // REPEAT...UNTIL loop becomes do...while in C++
    do {
        y = y - 4;          // SUBTRACT 4 FROM y
        x = x + (2.0 / y); // ADD 2/y TO x
    } while (y >= 6);      // UNTIL y IS LESS THAN 6

    cout << "x = " << x << endl;
    return 0;
}