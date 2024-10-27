// Create a class Car with attributes like brand, model, and price. Implement methods to input and
// display car details. Add a method to apply a discount to the price and display the updated price.
#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    string model;
    double price;
    void input(string brand, string model, double price)
    {
        this->brand = brand;
        this->model = model;
        this->price = price;
    }
    void display()
    {
        cout << "Car brand: " << this->brand << endl;
        cout << "MODEL: " << this->model << endl;
        cout << "Price:" << this->price << endl;
    }
    double discount(double percentage)
    {
         return this->price - (this->price * (percentage / 100));
    }
};
int main()
{
    car *mercedes = new car();
    mercedes->input("Amg g63", "2024", 40000000);
    mercedes->display();
    double disc = mercedes->discount(1.76);
    cout << "Your Car Price After Discount is: " << disc << endl;
}