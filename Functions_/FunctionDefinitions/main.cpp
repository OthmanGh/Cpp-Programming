// Section 11
// Function Definitions
// Area of Circle and Volume of a Cylinder
#include <iostream>
#include <cmath>

using namespace std;

double pi{3.14159};

double calc_area_circle(double r)
{
    return pi * pow(r, 2);
}

void area_circle()
{
    double radius{};
    cout << "Enter the radius of the circle : " << endl;
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

double calc_volume_cylinder(double radius, double height)
{

    // return pi * pow(radius, 2) * height;
    return calc_area_circle(radius) * height;
}

void volume_cylinder()
{
    double r{};
    double h{};

    cout << "Enter the radius of the cylinder : ";
    cin >> r;
    cout << "\nEnter the height of the cylinder : ";
    cin >> h;

    cout << "The volume of a cylinder with radius " << r << " and height " << h << calc_volume_cylinder(r, h) << endl;
}

int main()
{
    area_circle();
    volume_cylinder();
    return 0;
}
