// 7. What happens if an exception is thrown but not caught in C++?
// If an exception is thrown but not caught in C++, the program will
//terminate abnormally. This is because the exception propagates up
//the call stack, looking for a matching catch block. If no matching
//catch block is found, the program calls the std::terminate function,
//which by default calls the abort function, leading to program
//termination.

// Example:
// cpp
#include <iostream>
using namespace std;

void functionThatThrows() {
    throw runtime_error("An error occurred");
}

int main() {
    try {
        functionThatThrows();
    } catch (const logic_error& e) {
        cout << "Caught a logic_error: " << e.what() << endl;
    }
    // No catch block for runtime_error, so the program will terminate
    return 0;
}
// In this example, the functionThatThrows function throws a
// runtime_error exception. The main function has a catch 
// block for logic_error, but not for runtime_error. As a result, 
// the exception is not caught, and the program terminates abnormally.
// 
// Key Points:
// Exception Propagation: The exception propagates up the call stack, 
// looking for a matching catch block.
// 
// Program Termination: If no matching catch block is found, 
// the program calls std::terminate, leading to abnormal termination.
// 
// Handling Exceptions: To prevent this, ensure that all potential 
// exceptions are caught and handled appropriately.