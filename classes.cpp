#include <iostream>
#include <string>
using namespace std;
class emp
{
public:
    int salary;
    string name;
    emp(int salary, string name)
    {
        this->name = name;
        this->salary = salary;
    }

    void getinfo()
    {
        cout << this->name << endl;
        cout << this->salary << endl;
    }
};
int main()
{
    emp e1(20000, "bharat");
    e1.getinfo();
}