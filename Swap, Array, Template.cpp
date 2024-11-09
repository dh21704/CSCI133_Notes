#include <iostream>
using namespace std;

template <typename T>
void Sort(T arr[], int n) {
    int low = 0, high = n - 1;

    // Two-pointer approach to rearrange negative and positive numbers
    while (low <= high) {
        if (arr[low] < 0 && arr[high] >= 0) {
            // Negative number at low and non-negative at high, move both pointers
            low++;
            high--;
        } else if (arr[low] >= 0 && arr[high] < 0) {
            // Positive number at low and negative number at high, swap them
            swap(arr[low], arr[high]);
            low++;
            high--;
        } else {
            // If both are negative or both are positive, adjust the pointers
            if (arr[low] >= 0) low++;
            if (arr[high] < 0) high--;
        }
    }
}

int main() {
    double arr[] = {1.5, -3.2, 4.0, -7.1, 2.8, -1.9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the Sort function
    Sort(arr, n);

    // Output the sorted array
    cout << "Rearranged array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ", ";
    }
    cout << endl;

    return 0;
}
