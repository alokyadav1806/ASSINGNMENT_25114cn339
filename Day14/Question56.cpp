#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are:\n";

    bool found = false;

    for(int i = 0; i < n; i++) {
        bool printed = false;

        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                printed = true;
                break;
            }
        }

        if(printed)
            continue;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if(!found)
        cout << "No duplicate elements.";

    return 0;
}