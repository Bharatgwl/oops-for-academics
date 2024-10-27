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

1.Same name as the class: A constructor always has the same name as the class.
2.No return type: Constructors do not have a return type, not even void.
3.Called automatically: When an object is created, the constructor is invoked automatically, so you don't need to call it explicitly.
4.Types of constructors:
5.Default constructor: Takes no parameters and provides default initialization.
6.Parameterized constructor: Takes arguments to initialize object members with specific values.
7.Copy constructor: Initializes an object using another object of the same class.*/
