
// 2. Reading and Writing a Binary File with a Structure
// Here's a C++ program that opens a binary file for reading 
// and writing data of a structure containing student details. 
// It includes exception handling to ensure the file operations
//  are performed correctly.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    try {
        // Create and write to a binary file
        ofstream outFile("students.dat", ios::binary);
        if (!outFile) {
            throw runtime_error("Error opening file for writing");
        }
        Student s1 = {"John Doe", 1, 85.5};
        Student s2 = {"Jane Smith", 2, 92.0};
        outFile.write(reinterpret_cast<char*>(&s1), sizeof(s1));
        outFile.write(reinterpret_cast<char*>(&s2), sizeof(s2));
        outFile.close();

        // Read from the binary file
        ifstream inFile("students.dat", ios::binary);
        if (!inFile) {
            throw runtime_error("Error opening file for reading");
        }
        Student s;
        while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) {
            cout << "Name: " << s.name << ", Roll Number: " << s.rollNumber << ", Marks: " << s.marks << endl;
        }
        inFile.close();
    } catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}