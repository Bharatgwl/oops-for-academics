// Container classes in C++ are classes that store collections of
// objects. They provide a way to manage and organize data efficiently.
// The Standard Template Library (STL) in C++ offers several container
// classes, such as vector, list, map, set, and more. These containers
// are designed to handle different types of data structures and provide
// various functionalities.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access and print elements
    cout << "Elements in the vector: ";
    for (auto i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;

    // Remove the last element
    numbers.pop_back();

    // Print elements after removal
    cout << "Elements in the vector after pop_back: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
// We include the <vector> header to use the vector container class.

// We create a vector of integers named numbers.

// We use the push_back method to add elements to the vector.

// We access and print the elements using a loop.

// We use the pop_back method to remove the last element from the vector.

// We print the elements again to show the updated vector.

// Container classes like vector provide a convenient way
// to manage collections of data with built-in functionalities
//  for adding, removing, and accessing elements. They help in writing
//  clean and efficient code.