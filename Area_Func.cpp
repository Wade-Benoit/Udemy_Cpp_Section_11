// Simple functions without prototypes

#include <iostream>
using namespace std;

const double pi {3.14159};



double calcAreaCircle(double radius) {
    return pi * radius * radius;
}

void areaOfCircle () {
    double radius {};
    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    cout << "The area of the circe with radius " << radius << " is " << calcAreaCircle(radius) << endl;
}



double calcVolumeCylinder (double radius, double height) {
    return calcAreaCircle(radius) * height; // pi * radius * radius
}



void volumeOfCylinder() {
    double radius{};
    double height{};

    cout << "Enter the radius of the cylinder here: ";
    cin >> radius;
    cout << "Enter the height of the cylinder here: ";
    cin >> height;

    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << calcVolumeCylinder(radius, height) << endl;

}


int main() {
    areaOfCircle();
    volumeOfCylinder();

    return 0;
}


