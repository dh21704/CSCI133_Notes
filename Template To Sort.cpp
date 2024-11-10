#include <iostream>
using namespace std;

// Template function to sort the array
template <typename T>
void Sort(T arr[], int n) 
{
    int left = 0;        // Pointer to scan for positive numbers
    int right = n - 1;   // Pointer to scan for negative numbers

    // Rearrange elements such that negative numbers appear before positive numbers
    while (left < right) {
        // Move left pointer until we find a positive number
        while (left < n && arr[left] < 0) {
            left++;
        }

        // Move right pointer until we find a negative number
        while (right >= 0 && arr[right] >= 0) {
            right--;
        }

        // If the left pointer is still before the right pointer, swap
        if (left < right) {
            std::swap(arr[left], arr[right]);
        }
    }
}

// Function to print an array
template <typename T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main() {
    
    float arrFloat[] = {-90, -43.4, 93.4, 90, 43, 5, -4, 1, 21, 7};
    int nFloat = sizeof(arrFloat) / sizeof(arrFloat[0]);

    cout << "\nOriginal array (float): ";
    printArray(arrFloat, nFloat);

    Sort(arrFloat, nFloat);

    cout << "\nSorted array (float): ";
    printArray(arrFloat, nFloat);

    return 0;
}
