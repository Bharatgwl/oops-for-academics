// Polymorphism is a core concept in object-oriented programming 
// that allows objects of different classes to be treated as objects 
// of a common superclass. It enables a single interface to represent 
// different underlying forms (data types). There are two types of 
// polymorphism in C++: compile-time (or static) polymorphism and 
// run-time (or dynamic) polymorphism.

// Compile-time Polymorphism
// Compile-time polymorphism is achieved through function 
// overloading and operator overloading.

// Example: Function Overloading

#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }
    void show(double d) {
        cout << "Double: " << d << endl;
    }
    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(5);
    p.show(5.5);
    p.show("Hello");
    return 0;
}
// Run-time Polymorphism
// Run-time polymorphism is achieved through inheritance 
// and virtual functions. It allows a function to behave 
// differently based on the object that invokes it.

// Example: Virtual Functions

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();  // Output: Derived class
    return 0;
}