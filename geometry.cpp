#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Named constant for PI
    const double PI = 3.14159;

    // Variables for menu choice and dimensions
    int choice;
    double radius, length, width, base, height, area;

    // Display the Geometry Calculator menu
    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Format output to show fixed-point notation
    cout << fixed << setprecision(2);

    // Process the user's choice
    switch (choice) {
        case 1: // Circle
            cout << "Enter the circle's radius: ";
            cin >> radius;

            if (radius < 0) {
                cout << "Error: The radius cannot be negative.\n";
            } else {
                area = PI * radius * radius;
                cout << "The area of the circle is " << area << endl;
            }
            break;

        case 2: // Rectangle
            cout << "Enter the rectangle's length: ";
            cin >> length;
            cout << "Enter the rectangle's width: ";
            cin >> width;

            if (length < 0 || width < 0) {
                cout << "Error: Length and width cannot be negative.\n";
            } else {
                area = length * width;
                cout << "The area of the rectangle is " << area << endl;
            }
            break;

        case 3: // Triangle
            cout << "Enter the length of the triangle's base: ";
            cin >> base;
            cout << "Enter the triangle's height: ";
            cin >> height;

            if (base < 0 || height < 0) {
                cout << "Error: Base and height cannot be negative.\n";
            } else {
                area = base * height * 0.5;
                cout << "The area of the triangle is " << area << endl;
            }
            break;

        case 4: // Quit
            cout << "Program ending.\n";
            break;

        default: // Invalid menu choice
            cout << "Error: Valid choices are 1 through 4. Run the program again and select one of those.\n";
            break;
    }
