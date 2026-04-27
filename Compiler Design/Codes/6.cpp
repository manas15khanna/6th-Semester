#include <iostream>
#include <fstream>
#include <cctype> 
using namespace std;
int main() {
    ifstream file("Input.txt");
    if (!file.is_open()) {
        cout << "File not found" << endl;
        return 1;
    }
    char ch;
    int charCount = 0;
    int wordCount = 0;
    int whitespaceCount = 0;
    bool inWord = false;
    while (file.get(ch)) {
        charCount++;
        if (isspace(static_cast<unsigned char>(ch))) {
            whitespaceCount++;
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }
    if (inWord) {
        wordCount++;
    }
    file.close();
    cout << "Chars: " << charCount
         << ", Words: " << wordCount
         << ", WS: " << whitespaceCount << endl;
    return 0;
}
