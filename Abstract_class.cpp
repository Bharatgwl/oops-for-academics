// 4. Write a program to show how Abstract Classes are implemented in C++.
// Sure! Abstract classes in C++ are classes that cannot be instantiated
// and are designed to be inherited by other classes. They are used to
//  define interfaces and enforce a contract for derived classes.
//   An abstract class contains at least one pure virtual function,
//   which is a function declared with the = 0 syntax.

#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Non-pure virtual function
    virtual void resize(double factor)
    {
        cout << "Resizing shape by factor: " << factor << endl;
    }
};

// Derived class
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle" << endl;
    }

    void resize(double factor) override
    {
        cout << "Resizing circle by factor: " << factor << endl;
    }
};

// Derived class
class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a rectangle" << endl;
    }

    void resize(double factor) override
    {
        cout << "Resizing rectangle by factor: " << factor << endl;
    }
};

int main()
{
    Shape *shape1;
    Circle c1;
    shape1 = &c1;
    Shape *shape2;
    Rectangle r1;
    shape2 = &r1;

    shape1->draw();
    shape1->resize(2.0);

    shape2->draw();
    shape2->resize(3.0);

    delete shape1;
    delete shape2;
}