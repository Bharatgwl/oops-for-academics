/*Destructor:
A destructor is a special member function that is automatically called when an object goes out of scope or is explicitly deleted. Its main purpose is to release resources that the object may have acquired during its lifetime, like dynamically allocated memory or file handles.

Key characteristics of destructors:

1. Same name as the class, but preceded by a tilde (~): The destructor has the same name as the class with a ~ prefix.
2. No return type and no parameters: Destructors do not return anything and do not accept arguments.
3. Called automatically: Destructors are invoked automatically when an object is destroyed, either when the program exits or when the object goes out of scope.
4. Only one destructor per class: Unlike constructors, which can be overloaded, there can only be one destructor for a class.*/
#include <iostream>
using namespace std;

class MyClass
{
public:
    int *data;

    // Constructor
    MyClass(int size)
    {
        data = new int[size]; // Dynamically allocating memory
        cout << "Constructor: Memory allocated." << endl;
    }

    // Destructor
    ~MyClass()
    {
        delete[] data; // Freeing the allocated memory
        cout << "Destructor: Memory deallocated." << endl;
    }
};

int main()
{
    MyClass obj(10); // Constructor is called here
    // Destructor will be called automatically when obj goes out of scope
    MyClass *obj2 = new MyClass(5);
    delete obj2;
    return 0;
}
