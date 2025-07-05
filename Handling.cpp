#include <iostream>
#include <fstream>  // For file stream operations
using namespace std;

int main() {
    // 1. Writing to a file
    ofstream outFile("example.txt");  // Create and open a file for writing
    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    outFile << "Hello, this is a test file.\n";
    outFile << "File handling in C++ is fun!\n";
    outFile.close();  // Close the file after writing

    // 2. Reading from the file
    ifstream inFile("example.txt");  // Open the file for reading
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "Contents of the file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();  // Close the file after reading

    return 0;
}

