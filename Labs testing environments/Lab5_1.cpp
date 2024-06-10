#include <iostream>
#include <list>
#include <vector>

using namespace std;

// Function to perform quicksort on a vector of integers
vector<int> quickSort(vector<int> arr) {
    // Initialize vectors to store elements less than, equal to, and greater than the pivot
    vector<int> left, middle, right;
    
    // Initialize the output vector to store the sorted elements
    vector<int> output;

    // Choose the first element as the pivot point
    int pivot = arr[0];
    
    // Get the length of the input array
    int arr_length = arr.size();

    // Compare each element with the pivot and categorize into left, middle, or right vectors
    for (int i = 0; i < arr_length; i++) {
        if (arr[i] < pivot) {
            left.push_back(arr[i]);
        } else if (arr[i] > pivot) {
            right.push_back(arr[i]);
        } else {
            middle.push_back(arr[i]);
        }
    }

    // Concatenate the left, middle, and right vectors to get the sorted array
    output.insert(output.end(), left.begin(), left.end());
    output.insert(output.end(), middle.begin(), middle.end());
    output.insert(output.end(), right.begin(), right.end());

    return output;
}


int main() {
    // Input the size of the array
    int n;
    cin >> n;

    // Input the array elements
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Perform quicksort on the input array
    vector<int> result = quickSort(arr);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}