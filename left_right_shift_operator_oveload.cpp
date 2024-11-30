#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    // Constructor
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload the >> operator for input
    friend istream& operator>>(istream& input, Point& p) {
        input >> p.x >> p.y;
        return input;
    }

    // Overload the << operator for output
    friend ostream& operator<<(ostream& output, const Point& p) {
        output << "(" << p.x << ", " << p.y << ")";
        return output;
    }
};

int main() {
    Point p1, p2;

    // Read points from the user
    cout << "Enter coordinates for point 1 (x y): ";
    cin >> p1;
    cout << "Enter coordinates for point 2 (x y): ";
    cin >> p2;

    // Output the points
    cout << "Point 1: " << p1 << endl;
    cout << "Point 2: " << p2 << endl;

    return 0;
}
