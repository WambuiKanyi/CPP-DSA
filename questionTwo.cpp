// Question 2 Volume of a sphere
#include <iostream>
#include <cmath>   // for pow()
using namespace std;

int main() {
    double radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Formula: V = (4/3) * pi * r^3
    // Use 4.0/3.0 to avoid integer division
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    cout << "Volume of the sphere = " << volume << endl;
    return 0;
}