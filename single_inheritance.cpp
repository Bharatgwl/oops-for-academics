#include <iostream>
using namespace std;
class animal
{
public:
    string name;
    int age;
};
class dog : public animal
{
public:
    dog() {}
    void set(string name, int age)
    {

        this->age = age;
        this->name = name;
    }
    dog(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
    void speak()
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << name << " is barking" << " and its age is :" << age << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
};
int main()
{
    dog d1;
    d1.set("pitbull", 10);
    d1.speak();
}