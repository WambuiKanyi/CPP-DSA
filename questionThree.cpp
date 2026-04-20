// Question 3  Area and perimeter of a square (using functions)
#include <iostream>
using namespace std;

// Function to calculate area
double calcArea(double side) {
    return side * side;
}

// Function to calculate perimeter
double calcPerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Area      = " << calcArea(side) << endl;
    cout << "Perimeter = " << calcPerimeter(side) << endl;
    return 0;
}