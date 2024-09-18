
#include <iostream>

class Base
{
public:
    virtual void greet()
    { // without virtual it will give priority to base class
        std::cout << "Hello from Base class!" << std::endl;
    }
};

class Derived : public Base
{
public:
    void greet()  override
    {
        std::cout << "Hello from Derived class!" << std::endl;
    }
};

int main()
{
    Derived d1;
    d1.greet();
    return 0;
}
