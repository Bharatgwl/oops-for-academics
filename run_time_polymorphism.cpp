
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void greet()
    { // without virtual it will give priority to base class
        cout << "Hello from Base class!" << endl;
    }
};

class Derived : public Base
{
public:
    void greet() override
    {
        cout << "Hello from Derived class!" << endl;
    }
};

int main()
{
    Base *b1;
    Derived d1;
    b1 = &d1;
    b1->greet();

    return 0;
}
