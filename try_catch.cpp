#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    try
    {
        if (y <= 0)
        {
            throw "zero se divide kar rha h bhai";
        }
        cout << x / y << endl;
    }
    catch (const char *customerror)
    {
        cout << "error: " <<customerror << endl;
    }
}