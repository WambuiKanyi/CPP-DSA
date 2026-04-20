// Question 1  Days to seconds
#include <iostream>
using namespace std;

int main() {
    // Ask user for number of days
    int days;
    cout << "Enter the number of days: ";
    cin >> days;

    // Convert: 1 day = 24 hrs * 60 min * 60 sec
    long long seconds = (long long)days * 24 * 60 * 60;

    cout << days << " day(s) = " << seconds << " seconds" << endl;
    return 0;
}