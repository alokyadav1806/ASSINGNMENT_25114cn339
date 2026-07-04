#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    unordered_set<int> s;
    bool found = false;

    for (int num : arr) {
        int complement = target - num;

        if (s.find(complement) != s.end()) {
            cout << "Pair Found: " << complement << " " << num;
            found = true;
            break;
        }

        s.insert(num);
    }

    if (!found)
        cout << "No Pair Found";

    return 0;
}