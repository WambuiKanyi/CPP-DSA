// Question 4  Uppercase or lowercase checker (using functions)
#include <iostream>
using namespace std;

// Function to determine case of a character
void checkCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        cout << "'" << ch << "' is uppercase." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "'" << ch << "' is lowercase." << endl;
    } else {
        cout << "'" << ch << "' is not a letter." << endl;
    }
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    checkCase(ch);
    return 0;
}