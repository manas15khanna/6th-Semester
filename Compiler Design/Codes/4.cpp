#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string htmlFile, outFile;
    cout << "Enter HTML file: ";
    cin >> htmlFile;
    cout << "Enter output file: ";
    cin >> outFile;
    ifstream in(htmlFile);
    ofstream out(outFile);
    string line, content;
    while (getline(in, line)) content += line + "\n";
    size_t pos = 0;
    while (pos < content.length()) {
        size_t start = content.find('<', pos);
        if (start == string::npos) break;
        size_t end = content.find('>', start + 1);
        if (end != string::npos) {
            out << content.substr(start, end - start + 1) << endl;
            pos = end + 1;
        } else break;
    }
    cout << "Tags extracted to " << outFile << endl;
    return 0;
}
