#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int> &arr, int n) {
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for (int num : arr)
        arraySum += num;

    return totalSum - arraySum;
}

int main() {
    vector<int> arr = {1, 2, 3, 5};
    int n = 5;

    cout << "Missing Number: " << findMissing(arr, n);

    return 0;
}