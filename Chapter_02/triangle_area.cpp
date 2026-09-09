// Geometry: area of a triangle) Write a program that prompts the user to enter the
// three points (x1, y1), (x2, y2), and (x3, y3) of a triangle and displays its area.
// The formula for computing the area of a triangle is s = (side1 + side2 + side3) / 2
// Area = sqrt(s(s-side1)(s-side2)(s-side3))
// Example: Enter three points for a triangle: 1.5, -3.4, 4.6, 5, 9.5, -3.4 
// The area of the triangle is 33.6
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    
    cout << "Enter Vertex 1 (x y) in m: ";
    cin >> x1 >> y1;
    cout << "Enter Vertex 2 (x y) in m: ";
    cin >> x2 >> y2;
    cout << "Enter Vertex 3 (x y) in m: ";
    cin >> x3 >> y3;

    
    double area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));


    if (area == 0) {
        cout << "Error: The coordinates do not form a valid triangle (points are collinear)." << endl;
    } else {
        cout << "The area of the triangle is: " << area << " m^2" << endl;
    }

    return 0;
}