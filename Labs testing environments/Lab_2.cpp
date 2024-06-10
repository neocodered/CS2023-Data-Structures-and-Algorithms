#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int temp;
    int length = arr.size();

    for (int i = 0; i < d; i++) {
        temp = arr[0];
        for (int j = 1; j <= length - 1; j++) {
            arr[j - 1] = arr[j];
        }
        arr[length - 1] = temp;
    }

    return arr;
}

int main() {
    // Example usage
    int d = 4;
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int> rotatedArr = rotateLeft(d, arr);

    // Print the rotated array
    for (int i = 0; i < rotatedArr.size(); i++) {
        cout << rotatedArr[i] << " ";
    }

    return 0;
}

