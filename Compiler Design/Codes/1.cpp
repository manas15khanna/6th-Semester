#include <iostream>
using namespace std;
int main() {
    int lines = 0, spaces = 0, tabs = 0, others = 0;
    char ch;

    while (cin.get(ch)) {
        if (ch == '$')
            break;
        if (ch == '\n')
            lines++;
        else if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else
            others++;
    }
    cout << "Lines: " << lines << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Tabs: " << tabs << endl;
    cout << "Others: " << others << endl;
    return 0;
}
