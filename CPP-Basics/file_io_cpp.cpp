#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("example.txt");
    outfile << "Writing to a file using C++!" << endl;
    outfile.close();

    ifstream infile("example.txt");
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();
    return 0;
}