#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    double calculateArea(int radius)
    {
        return M_PI * (double)(radius * radius);
    }

    double calculateArea(int width, int height)
    {
        return (double)(width * height);
    }

    double calculateArea(float base, float height)
    {
        return base * height / 2.0;
    }

    char getUserInput(int &radius, int &width, int &height, float &base, float &vheight)
    {
        char temp_op;
        cout << "Select a geometrical shape from the list: \n"
             << "Circle 'C'\n"
             << "Rectangle 'R'\n"
             << "Triangle 'T'\n"
             << "Option: ";

        cin >> temp_op;

        switch (temp_op)
        {
        case 'C':
            cout << "Enter circle's radius: ";
            cin >> radius;
            break;
        case 'R':
            cout << "Enter rectangle's width and height separated by a space: ";
            cin >> width >> height;
            break;
        case 'T':
            cout << "Enter triangle's base and vetical height separated by a space: ";
            cin >> base >> vheight;
            break;
        default:
            cout << "Invalid option, try again.\n";
            temp_op = 'F';
            break;
        }

        return temp_op;
    }
};

class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int radius)
    {
        this->radius = radius;
    }

    void setRadius(int radius)
    {
        this->radius = radius;
    }

    int getRadius()
    {
        return this->radius;
    }
};

class Rectangle : public Shape
{
private:
    int width, height;

public:
    Rectangle(int width, int height)
    {
        this->width = width;
        this->height = height;
    }

    void setWidth(int width)
    {
        this->width = width;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    int getWidth()
    {
        return this->width;
    }

    int getHeight()
    {
        return this->height;
    }
};

class Triangle : public Shape
{
private:
    int base, height;

public:
    Triangle(int base, int height)
    {
        this->base = base;
        this->height = height;
    }

    void setBase(int base)
    {
        this->base = base;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    int getBase()
    {
        return this->base;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{
    int radius, width, height;
    float base, vheight, area;

    Shape s;
    char op = s.getUserInput(radius, width, height, base, vheight);

    switch (op)
    {
    case 'C':
    {
        Circle c(radius);
        area = c.calculateArea(c.getRadius());
        break;
    }

    case 'R':
    {
        Rectangle r(width, height);
        area = r.calculateArea(r.getWidth(), r.getHeight());
        break;
    }

    case 'T':
    {
        Triangle t(base, vheight);
        area = t.calculateArea(t.getBase(), t.getHeight());
        break;
    }

    case 'F':
        return 0;

    default:
        break;
    }

    cout << "The area is " << area << " cm^2.\n";
    return 0;
}