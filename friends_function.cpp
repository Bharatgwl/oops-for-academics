/*
In C++, the friend keyword is used to grant a non-member function or another
class access to the private and protected members of a class.
 Normally, only the member functions of a class can directly access its private and protected members.
 However, with the friend keyword, you can allow certain functions or entire classes to bypass this restriction.

Key points about the friend keyword:
A friend function can be a regular function or a member function of another class.
A friend class can access all private and protected members of the class that declares it as a friend.*/

#include <iostream>
using namespace std;

class MyClass
{
private:
    int num1, num2;

public:
    MyClass(int x, int y)
    {
        this->num1 = x;
        this->num2 = y;
    } // Constructor to initialize values

    // Declare the friend function
    friend int sum(MyClass obj);
};

// Definition of friend function
int sum(MyClass obj)
{
    // Access private members directly
    return obj.num1 + obj.num2;
}

int main()
{
    MyClass obj(10, 20);    // Create an object of MyClass
    cout << "Sum: " << sum(obj) << endl; // Call the friend function
    return 0;
}
