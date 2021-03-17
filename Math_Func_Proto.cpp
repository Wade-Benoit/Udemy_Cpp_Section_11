//The same functions with prototypes


#include <iostream>
using namespace std;

const double pi {3.14159};



// The function prototypes
void areaOfCircle ();
double calcAreaCircle(double radius);

void volumeOfCylinder();
double calcVolumeCylinder (double radius, double height);
// This is new




int main() {
    areaOfCircle();
    volumeOfCylinder();

    return 0;
}





void areaOfCircle () {
    double radius {};
    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    cout << "The area of the circe with radius " << radius << " is " << calcAreaCircle(radius) << endl;
}

double calcAreaCircle(double radius) {
    return pi * radius * radius;
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

double calcVolumeCylinder (double radius, double height) {
    return calcAreaCircle(radius) * height; // pi * radius * radius
}

