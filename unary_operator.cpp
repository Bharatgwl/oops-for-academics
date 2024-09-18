#include <iostream>
using namespace std;
class sample
{
public:
    int x;
    void operator++(int)
    {
        cout << x * 2 << endl;
    }
};
int main()
{
    sample s1;
    s1.x = 5;
    s1++;
}