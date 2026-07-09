#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    unordered_set<char> seen;

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            cout << ch;
            seen.insert(ch);
        }
    }

    return 0;
}