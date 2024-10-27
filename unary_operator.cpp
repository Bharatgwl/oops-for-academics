#include <iostream>
using namespace std;
class sample
{
public:
    int x;
    void operator++() // Pre increment overloading
    {
        cout << "-"<<x << endl;
    }
   
};
int main()
{
    sample s1;
    s1.x = 10;
    ++s1;

}


// #include <iostream>
// using namespace std;
// class sample
// {
// public:
//     int x;
//     void operator++() // Pre increment overloading
//     {
//         cout << x * 2 << endl;
//     }
//     void operator++(int) // post increment overloading
//     {
//         cout << x / 2 << endl;
//     }
// };
// int main()
// {
//     sample s1;
//     s1.x = 10;
//     ++s1;
//     s1++;
// }