// Question 6  Array input and average
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    double arr[SIZE];
    double sum = 0;

    // Use a loop to populate the array
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> arr[i];
        sum += arr[i];  // accumulate sum as we go
    }

    double average = sum / SIZE;
    cout << "Average = " << average << endl;
    return 0;
}