#include <iostream>
#include <cmath>

using namespace std;
#ifndef M_PI
#define M_PI 3.1416
#endif

// Function prototypes
double calcDistance(double x1, double y1, double x2, double y2);
double calcRadius(double centerX, double centerY, double pointX, double pointY);
double calcCircumference(double radius);
double calcArea(double radius);

int main() {
    // User input
    double centerX, centerY, pointX, pointY;

    cout << "Enter the coordinates of the center of the circle (x y): ";
    cin >> centerX >> centerY;

    cout << "Enter the coordinates of a point on the circumference (x y): ";
    cin >> pointX >> pointY;

    // Processing
    double radius = calcRadius(centerX, centerY, pointX, pointY);
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    // Output
    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}

// Function to calculate distance between two points
// Precondition: (x1, y1) and (x2, y2) are valid Cartesian coordinates
// Postcondition: Returns the distance between the two points
double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate radius of a circle
// Precondition: (centerX, centerY) and (pointX, pointY) are valid Cartesian coordinates
// Postcondition: Returns the radius of the circle
double calcRadius(double centerX, double centerY, double pointX, double pointY) {
    return calcDistance(centerX, centerY, pointX, pointY);
}

// Function to calculate circumference of a circle
// Precondition: radius is a valid non-negative value
// Postcondition: Returns the circumference of the circle
double calcCircumference(double radius) {
    return 2 * M_PI * radius;
}

// Function to calculate area of a circle
// Precondition: radius is a valid non-negative value
// Postcondition: Returns the area of the circle
double calcArea(double radius) {
    return M_PI * pow(radius, 2);
}