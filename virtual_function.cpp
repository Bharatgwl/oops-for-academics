// Define virtual function. What is the role of a virtual function in achieving run-time polymorphism?
// A virtual function in C++ is a member function in a base class
// that you expect to be redefined in derived classes. When you use
//  a virtual function, you enable run-time polymorphism, allowing
//  the program to decide at run-time which function to call based
//   on the type of the object pointed to by a base class pointer.

// Key Points:
// Declaration: A virtual function is declared using the virtual
// keyword in the base class.

// Overriding: Derived classes can override the virtual function
//  to provide specific implementations.

// Dynamic Binding: The function call is resolved at run-time,
// enabling dynamic binding.

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->show(); // Output: Derived class
    return 0;
}