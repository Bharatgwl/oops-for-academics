#include <iostream>
using namespace std;
int main()
{
    int *arr = new int[15];
    for (int i = 0; i < 15; i++)
    {
        arr[i] = i;
    }
    for (auto i =0; i<15; i++)
    {
        cout << i[arr] << endl;
    }
}