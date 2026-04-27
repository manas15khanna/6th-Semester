#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main() {
    string code = "int count; while (count < value) { if (count == value); else count = value; }";
    vector<string> keywords = {"int", "float", "while", "if", "else"};
    string operators = "+-*/=<>!";
    string separators = ",;(){}";
    size_t i = 0;
    while (i < code.length()) {
        if (isspace(code[i])) {
            i++;
        }
        else if (isalpha(code[i])) {
            size_t start = i;
            while (i < code.length() && isalnum(code[i]))
                i++;
            string token = code.substr(start, i - start);
            bool isKeyword = false;
            for (string k : keywords) {
                if (token == k) {
                    cout << "Keyword: " << token << endl;
                    isKeyword = true;
                    break;
                }
            }
            if (!isKeyword)
                cout << "Identifier: " << token << endl;
        }
        else if (operators.find(code[i]) != string::npos) {
            cout << "Operator: " << code[i] << endl;
            i++;
        }
        else if (separators.find(code[i]) != string::npos) {
            cout << "Separator: " << code[i] << endl;
            i++;
        }
        else {
            i++;
        }
    }
    return 0;
}
