#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isValidIdentifier(const string& s) {
    if (s.empty() || (!isalpha(s[0]) && s[0] != '_'))
        return false;
    for (size_t i = 1; i < s.length(); ++i) {
        if (!isalnum(s[i]) && s[i] != '_')
            return false;
    }
    return true;
}
int main() {
    string input;
    getline(cin, input);
    string token = "";
    for (size_t i = 0; i <= input.length(); ++i) {
        if (i < input.length() && (isalnum(input[i]) || input[i] == '_')) {
            token += input[i];
        } else {
            if (!token.empty()) {
                if (isValidIdentifier(token))
                    cout << "Valid: " << token << endl;
                token.clear(); }}}
    return 0;
}
