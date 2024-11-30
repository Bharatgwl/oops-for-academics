#include <iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout << "base class function is called" << endl;
    }
};
class child : public base
{
public:
    void display() override
    {
        cout << "child class function is called" << endl;
    }
};
int main()
{
    base *b1;
    child c1;
    b1 = &c1;
    b1->display();

}
