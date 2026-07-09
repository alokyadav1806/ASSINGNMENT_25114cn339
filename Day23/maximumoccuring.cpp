#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    unordered_map<char, int> freq;

    for (char ch : str)
        freq[ch]++;

    char ans;
    int maxi = 0;

    for (auto x : freq) {
        if (x.second > maxi) {
            maxi = x.second;
            ans = x.first;
        }
    }

    cout << "Maximum occurring character: " << ans;
    cout << "\nFrequency: " << maxi;

    return 0;
}