// A static function in C++ is a function that belongs to the 
// class rather than any object instance. This means that the
// static function can be called without creating an instance
// of the class. Static functions can only access static data
// members and other static functions of the class.

// Key Points:
// Belongs to the Class: Static functions are 
// associated with the class itself, not with any specific object.

// Access: They can only access static data members 
// and static member functions.

#include <iostream>
using namespace std;

class Math {
public:
    static int data;
    // Static function
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    // Calling static function using class name
    cout << "Sum: " << Math::add(5, 3) << endl;
    Math::data=5;
    cout<< Math::data<<endl;
    return 0;
}
// In this example:

// The add function is a static function defined within the Math class.

// The add function is called using the class name Math without creating 
// an instance of the class.

// Static functions are useful when you need a function that is 
// related to the class but does not require access to instance-specific data