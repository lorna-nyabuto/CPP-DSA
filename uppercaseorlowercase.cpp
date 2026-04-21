#include <iostream>
using namespace std;

// Function to check case
void checkCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase letter" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase letter" << endl;
    } else {
        cout << "Not a letter" << endl;
    }
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    checkCase(ch);

    return 0;
}