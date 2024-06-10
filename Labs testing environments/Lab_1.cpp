#include <iostream>
#include <vector>

using namespace std;
void insertionSort1(int n, vector<int>& arr);

int main() {
    // Example usage
    int n = 5;
    vector<int> arr = {12, 16, 20, 24, 8};

    insertionSort1(n, arr);

    return 0;
}

void insertionSort1(int n, vector<int>& arr) {
    int data = arr[n - 1];
    int i;

    for (i = n - 2; i >= 0; i--) {
        if (data >= arr[i]) {
            arr[i + 1] = data;
            break;
        } else {
            arr[i + 1] = arr[i];

            // Printing the interim array
            for (int j = 0; j < n; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;

            if (i == 0) {
                arr[0] = data;
            }
        }
    }

    // Printing the final array 
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}