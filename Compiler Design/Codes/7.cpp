#include <iostream>
#include <fstream>
#include <cctype>  // for isspace()

using namespace std;

int main() {
    ifstream inFile("Input.txt");
    ofstream outFile("Output.txt");

    if (!inFile) {
        cout << "Error opening Input.txt" << endl;
        return 1;
    }

    char ch;
    bool lastWasSpace = false;

    while (inFile.get(ch)) {
        if (isspace(ch)) {
            if (!lastWasSpace) {
                outFile << ' ';
                lastWasSpace = true;
            }
        } else {
            outFile << ch;
            lastWasSpace = false;
        }
    }

    inFile.close();
    outFile.close();

    cout << "Whitespace normalized successfully into Output.txt" << endl;

    return 0;
}
