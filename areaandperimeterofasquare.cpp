#include <iostream>
using namespace std;

// Function to calculate area
double area(double side) {
    return side * side;
}

// Function to calculate perimeter
double perimeter(double side) {
    return 4 * side;
}

int main() {
    double side;
    cout << "Enter side length: ";
    cin >> side;

    cout << "Area: " << area(side) << endl;
    cout << "Perimeter: " << perimeter(side) << endl;

    return 0;
}