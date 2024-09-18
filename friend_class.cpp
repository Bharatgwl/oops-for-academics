/*Example of a Friend Class:
In this example, the FriendClass is declared as a friend of MyClass,
 which allows it to access the private members of MyClass.*/
#include <iostream>
using namespace std;

class MyClass
{
private:
    int secret;

public:
    MyClass(int x)
    {
        this->secret = x;
    }

    // Declare the entire FriendClass as a friend
    friend class FriendClass;
};

class FriendClass
{
public:
    void revealSecret(MyClass obj)
    {
        // Access private member of MyClass directly
        cout << "Secret value is: " << obj.secret << endl;
    }
};

int main()
{
    MyClass obj(42);             // Create an object of MyClass
    FriendClass friendObj;       // Create an object of FriendClass
    friendObj.revealSecret(obj); // Call the function to reveal the private member
    return 0;
}
