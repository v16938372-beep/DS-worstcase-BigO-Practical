#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    // O(n): taking input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // O(n): finding maximum element
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum element is: " << max << endl;

    return 0;
}
