#include <iostream>
using namespace std;

class Calculator {
public:
    // Inline function with default arguments
    inline int add(int a, int b = 0) {
        return a + b;
    }

    // Inline function with default arguments
    inline int multiply(int a, int b = 1) {
        return a * b;
    }
};

int main() {
    Calculator calc;

    // Using default arguments
    cout << "Addition (5 + 0): " << calc.add(5) << endl;          // Output: 5
    cout << "Addition (5 + 3): " << calc.add(5, 3) << endl;       // Output: 8
    cout << "Multiplication (5 * 1): " << calc.multiply(5) << endl; // Output: 5
    cout << "Multiplication (5 * 3): " << calc.multiply(5, 3) << endl; // Output: 15

    return 0;
}
