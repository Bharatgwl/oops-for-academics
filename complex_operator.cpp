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
    void operator*(complex &obj)
    {
        // double newReal = (real * obj.real) - (img * obj.img);
        // double newimg = (real * obj.img) + (img * obj.real);
        // cout << newReal << "+" << newimg << "i" << endl;
        cout << (real * obj.real) - (img * obj.img) << "+" << (real * obj.img) + (img * obj.real)<<"i";
    }
};
int main()
{
    complex c1(3, 2);
    complex c2(1, 7);
    c1 + c2;
    c1 *c2;
}
