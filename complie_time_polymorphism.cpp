/*
There are two main types of polymorphism in C++:

Compile-time Polymorphism (Static Polymorphism)
Run-time Polymorphism (Dynamic Polymorphism)
1. Compile-time Polymorphism (Static Polymorphism):
Compile-time polymorphism is resolved during the compilation of the program.
The most common techniques to achieve compile-time polymorphism are function overloading and operator overloading.

a) Function Overloading:
Function overloading allows you to define multiple functions with the same name but different parameter lists.
The compiler determines which version of the function to call based on the arguments passed.*/
#include <iostream>
using namespace std;

class Example
{
public:
    void display(int i)
    {
        cout << "Integer: " << i << endl;
    }

    void display(double d)
    {
        cout << "Double: " << d << endl;
    }

    void display(string s)
    {
        cout << "String: " << s << endl;
    }
};
/*
(b) Operator Overloading:
Operator overloading allows you to redefine the way operators work with user-defined types (e.g., classes). 
This enhances the intuitive use of operators with objects*/
class Complex
{
private:
    int data;

public:
    Complex() {}
    Complex(int data)
    {
        this->data = data;
    }
    void operator+(Complex &obj)
    {
        cout << data * obj.data << endl;
    }
};
int main()
{
    Example obj;
    obj.display(5);        // Calls display(int)
    obj.display(3.14);     // Calls display(double)
    obj.display("Hello!"); // Calls display(string)
    Complex c1(2), c2(3);
    c1 + c2;

    return 0;
}
