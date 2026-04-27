#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    size_t i = 0;
    while (i < input.length()) {
        if (isdigit(input[i]) || (input[i] == '-' && i+1 < input.length() && isdigit(input[i+1]))) {
            size_t start = i;
            bool isFloat = false;
            while (i < input.length() && (isdigit(input[i]) || input[i] == '.' || input[i] == '-')) {
                if (input[i] == '.') isFloat = true;
                i++;
            }
            string num = input.substr(start, i - start);
            if (isFloat) cout << "Float: " << num << endl;
            else cout << "Integer: " << num << endl;
        } else i++;
    }
    return 0;
}
