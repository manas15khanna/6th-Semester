#include <iostream>
using namespace std;
int main() {
    string input;
    cout << "Enter string (only a and b): ";
    cin >> input;
    int state = 0; // q0 = 0, q1 = 1, q2 = 2, dead = 3
    for (char ch : input) {
        switch (state) {
            case 0: // q0
                if (ch == 'a') state = 1;
                else if (ch == 'b') state = 2;
                break;
            case 1: // q1
                if (ch == 'a') state = 3;
                else if (ch == 'b') state = 0;
                break;
            case 2: // q2 (accept state)
                state = 3; // any input goes to dead
                break;
            case 3: // dead state
                state = 3;
                break;
        }
    }
    if (state == 2)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;
    return 0;
}
