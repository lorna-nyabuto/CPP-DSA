#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 20;

    do {
        y = y - 4;
        x = x + (2 / y);   // integer division
    } while (y >= 6);
//2 / y is integer division, in case of a decimal value it can change to: x = x + (2.0 / y)
    cout << "Value of x: " << x << endl;

    return 0;
}