#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    string filename = "private_and_public.txt";
    ofstream writeInfile(filename); // opens in write mode through ofstream
    if (writeInfile.is_open())      // checking if its open or not
    {
        writeInfile << "Hello, this is a file handling example.\n";
        writeInfile << "my name is bharat.\n";
        writeInfile.close();
        cout << "data written in file successfully:" << endl;
    }
    else
    {
        cout << "error in opening file :" << endl;
        return 1;
    }
    ifstream readfile(filename);//open file in read mode through ifstream
    if (readfile.is_open())//checking if its open or not
    {
        string line;
        while (getline(readfile, line))
        {
            cout<<line<<endl;
        }
        readfile.close();//closing filw 
    }
  
}