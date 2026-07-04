#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 5, 3, 2, 3, 4, 2, 3};

    unordered_map<int, int> freq;

    for (int num : arr)
        freq[num]++;

    int maxFreq = 0;
    int element = arr[0];

    for (auto x : freq) {
        if (x.second > maxFreq) {
            maxFreq = x.second;
            element = x.first;
        }
    }

    cout << "Element with Maximum Frequency: " << element << endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}