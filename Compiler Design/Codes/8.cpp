#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string inputFile;
    cout << "Enter C source file name: ";
    cin >> inputFile;
    ifstream in(inputFile);
    ofstream out("out.c");
    if (!in) {
        cout << "Error opening input file!" << endl;
        return 1;
    }
    char ch;
    while (in.get(ch)) {
        if (ch == '/' && in.peek() == '/') {
            // Skip rest of the line
            while (in.get(ch) && ch != '\n');
            out << '\n'; // keep newline
        } else {
            out << ch;
        }
    }
    in.close();
    out.close();
    cout << "Single-line comments removed. Output saved in out.c" << endl;
    return 0;
}
