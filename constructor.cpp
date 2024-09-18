#include<iostream>
using namespace std;

class MyClass
{
public:
    int value;

    // Constructor
    MyClass(int val)
    {
        value = val;
        cout << "Constructor called, value initialized to " << value << endl;
    }
};

int main()
{
    MyClass obj(10); // Constructor called automatically
    return 0;
} /*
Constructor:
A constructor is a special member function in C++ that is automatically called when an object of a class is created. Its main purpose is to initialize objects (i.e., assign values to data members of the class).

Key characteristics of constructors:

Same name as the class: A constructor always has the same name as the class.
No return type: Constructors do not have a return type, not even void.
Called automatically: When an object is created, the constructor is invoked automatically, so you don't need to call it explicitly.
Types of constructors:
Default constructor: Takes no parameters and provides default initialization.
Parameterized constructor: Takes arguments to initialize object members with specific values.
Copy constructor: Initializes an object using another object of the same class.*/
