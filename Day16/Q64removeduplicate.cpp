#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};

    set<int> uniqueElements(arr.begin(), arr.end());

    cout << "Array after removing duplicates: ";

    for (int x : uniqueElements)
        cout << x << " ";

    return 0;
}