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

    int key;
    cout << "Enter element to find frequency: ";
    cin >> key;

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}