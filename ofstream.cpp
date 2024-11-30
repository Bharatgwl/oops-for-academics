// <!--
// In C++, the ofstream class is used to create and write to files. You can specify the mode in which the file is opened by passing a second argument to the ofstream constructor or the open function. The mode determines how the file is opened and what operations are allowed.

// Common Modes
// ios::out: Open for writing (default for ofstream).

// ios::app: Append to the end of the file.

// ios::ate: Open and move to the end of the file.

// ios::in: Open for reading.

// ios::trunc: Truncate the file if it exists.

// ios::binary: Open in binary mode. -->

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open a file for writing (default mode)
    ofstream file1("test.txt");
    file1 << "bharat is the pro programmer";
    file1 << " he will do something \nwhich can change the world.";
    file1 << " YES I AM NARCISSIST\n ";
    file1.close();

    // Open a file for appending
    ofstream file2("example2.txt", ios::app);
    file2 << "Appending to example2.txt\n";
    file2.close();

    // Open a file in binary mode
    ofstream file3("example3.bin", ios::binary);
    file3.write("Binary data", 11);
    file3.close();

    // Open a file for writing and truncate it if it exists
    ofstream file4("example4.txt", ios::out | ios::trunc);
    file4 << "Writing to example4.txt\n";
    file4.close();

    return 0;
}
// <!-- Explanation
// Default Mode (ios::out): The file is opened for writing. If the file already exists, its contents are truncated.

// Append Mode (ios::app): The file is opened for writing, and all output operations are performed at the end of the file.

// Binary Mode (ios::binary): The file is opened in binary mode, which is useful for writing non-text data.

// Truncate Mode (ios::trunc): The file is truncated if it already exists, meaning its contents are cleared before writing. -->