#include <iostream>
using namespace std;
int main() {
    string input;
    cout << "Enter string (only a and b): ";
    cin >> input;
    int state = 0; // q0 = 0, q1 = 1, q2 = 2, q3 = 3
    for (char ch : input) {
        switch (state) {
            case 0: // even a, even b
                if (ch == 'a') state = 1;
                else if (ch == 'b') state = 2;
                break;
            case 1: // odd a, even b
                if (ch == 'a') state = 0;
                else if (ch == 'b') state = 3;
                break;
            case 2: // even a, odd b
                if (ch == 'a') state = 3;
                else if (ch == 'b') state = 0;
                break;
            case 3: // odd a, odd b
                if (ch == 'a') state = 2;
                else if (ch == 'b') state = 1;
                break;
        }
    }
    if (state == 0)
        cout << "Accepted (Even number of a's and b's)" << endl;
    else
        cout << "Rejected" << endl;
    return 0;
}
