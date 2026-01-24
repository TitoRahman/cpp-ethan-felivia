#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int arr[], int n) {
    // Outer loop to traverse through all array elements
    for (int i = 0; i < n - 1; ++i) {
        // Inner loop for comparisons and swapping
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void vectorBubbleSort(vector<int>& vec) {
    int n = vec.size();
    // Outer loop to traverse through all vector elements
    for (int i = 0; i < n - 1; ++i) {
        // Inner loop for comparisons and swapping
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;


    vector<int> vec = {64, 34, 25, 12, 22, 11, 90};
    vectorBubbleSort(vec);
    cout << "Sorted vector: \n";
    for (const auto& val : vec) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}