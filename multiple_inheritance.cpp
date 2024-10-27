// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     A() { cout << "A's constructor called" << endl; }
// };

// class B
// {
// public:
//     B() { cout << "B's constructor called" << endl; }
// };

// class C : public B, public A // Note the order
// {
// public:
//     C() { cout << "C's constructor called" << endl; }
// };

// int main()
// {
//     C c;
//     return 0;
// }
#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;

public:
    person()
    {
    }
};
class department
{
protected:
    string Dept_name;
    int Dept_id;

public:
    department() {}
};
class Employee : public person, public department
{
protected:
    int empployee_id; // self attributes
    long long salary;    // self attributes

public:
    Employee(string name, int age, string Dept_name, int Dept_id, int empployee_id, long long salary)
    {

        this->name = name;
        this->age = age;
        this->Dept_name = Dept_name;
        this->Dept_id = Dept_id;
        this->empployee_id = empployee_id;
        this->salary = salary;
    }
    void Employee_info()
    {
        cout << "empployee_id :" << empployee_id << endl;
        cout << "salary :" << salary << endl;
        cout << "Dept_id :" << Dept_id << endl;
        cout << "Dept_name :" << Dept_name << endl;
        cout << "age :" << age << endl;
        cout << "name :" << name << endl;
    }
};

int main()
{
    Employee e1("Bharat", 19, "DSE", 2023133, 141745, 1000000);
    e1.Employee_info();
}