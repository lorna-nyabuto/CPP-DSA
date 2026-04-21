#include <iostream>
#include <cmath>   // for pow()
using namespace std;

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;

    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    cout << "Volume of sphere: " << volume << endl;

    return 0;
}