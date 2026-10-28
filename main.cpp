#include <iostream>
using namespace std;

int main() {

    const double pi = 3.14159;
    double area, radius, length, width, base, height;
    int shape;

    cout << "Select the shape for which to calculate area." << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit" << endl;
    cin >> shape;

    switch (shape) {

        case 1:
            cout << "Enter the radius of the circle: " << endl;
            cin >> radius;
            area = pi * (radius * radius);
            break;

        case 2:
            cout << "Enter the length of the rectangle: " << endl;
            cin >> length;
            cout << "Enter the width of the rectangle: " << endl;
            cin >> width;
            area = length * width;
            break;

        case 3:
            cout << "Enter the base of the triangle: " << endl;
            cin >> base;
            cout << "Enter the height of the triangle: " << endl;
            cin >> height;
            area = 0.5 * base * height;
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid menu selection." << endl;
            return 0;
    }

cout << "Area = " << area << " square units" << endl;

    return 0;
}