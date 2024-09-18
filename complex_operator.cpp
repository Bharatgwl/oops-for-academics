#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;
    complex() {}
    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void operator+(complex &obj)
    {
        cout << real + obj.real << "+" << img + obj.img << "i" << endl;
    }
};
int main()
{
    complex c1(2, 5), c2(4, 5);
    c1 + c2;
}
