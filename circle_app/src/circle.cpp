#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
    double radius;

public:
    // Getters and setters.
    double getRadius()
    {
        return this->radius;
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }

    // Class methods.
    double getArea()
    {
        return this->radius * this->radius * M_PI;
    }

    double getCircumference()
    {
        return 2 * M_PI * this->radius;
    }

    // Constructors.
    Circle()
    {
        this->radius = 1.0;
    }

    Circle(double radius)
    {
        this->radius = radius;
    }
};

int main()
{
    Circle c1;
    cout << "Default constructor radius: " << c1.getRadius() << endl;

    Circle c2(5.0);
    cout << "Overload parameterized constructor radius: " << c2.getRadius() << endl;
    return 0;
}