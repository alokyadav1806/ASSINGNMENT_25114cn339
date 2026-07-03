#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill the remaining positions with zeroes
    while (index < n) {
        arr[index] = 0;
        index++;
    }

    cout << "Array after moving zeroes to end:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}