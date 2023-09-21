#include <iostream>
using namespace std;
class Shape
{
public:
    virtual float area()=0;
};
class Circle : public Shape
{
private:
    float radius;
public:
    Circle(float radius)
    {
        this->radius = radius;
    }
    float area()
    {
        return 3.14 * radius * radius;
    }
};
class Rectangle : public Shape
{
private:
    float length;
    float width;
public:
    Rectangle(float length, float width)
    {
        this->length = length;
        this->width = width;
    }
    float area()
    {
        return length * width;
    }
};
class Triangle : public Shape
{
private:
    float base;
    float height;
public:
    Triangle(float base, float height)
    {
        this->base = base;
        this->height = height;
    }
    float area()
    {
        return 0.5 * base * height;
    }
};
int main()
{
    Circle circle(5);
    cout << "Area of circle: " << circle.area() << endl;
    Rectangle rectangle(10, 5);
    cout << "Area of rectangle: " << rectangle.area() << endl;
    Triangle triangle(10, 5);
    cout << "Area of triangle: " << triangle.area() << endl;
    return 0;
}
