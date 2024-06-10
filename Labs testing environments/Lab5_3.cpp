#include <bits/stdc++.h>

using namespace std;

// Function to trim leading whitespaces from a string
string ltrim(const string &);
// Function to trim trailing whitespaces from a string
string rtrim(const string &);
// Function to split a string by spaces and return a vector of tokens
vector<string> split(const string &);

/*
 * Complete the 'closestNumbers' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as a parameter.
 */

vector<int> closestNumbers(vector<int> numbers) {
    // Set the array in ascending order
    sort(numbers.begin(), numbers.end());

    // Initialize the minimum difference to the maximum integer value
    int minDifference = INT_MAX;
    int numSize = numbers.size();

    // Calculate the minimum difference
    for (int i = 1; i < numSize; i++) {
        // If the difference between the current and the previous element is less than the minimum difference
        minDifference = min(minDifference, numbers[i] - numbers[i - 1]);
    }

    // Search for pairs with the minimum difference
    vector<int> result;
    for (int i = 1; i < numSize; i++) {
        // If the difference between the current and the previous element is equal to the minimum difference
        if (numbers[i] - numbers[i - 1] == minDifference) {
            // Push the pair into the result vector
            result.push_back(numbers[i - 1]);
            result.push_back(numbers[i]);
        }
    }

    return result;
}

// Main function
int main() {
    // Input the size of the array
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(ltrim(rtrim(n_temp)));

    // Input the array elements
    string arr_temp_temp;
    getline(cin, arr_temp_temp);
    vector<string> arr_temp = split(rtrim(arr_temp_temp));
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);
        arr[i] = arr_item;
    }

    // Call the closestNumbers function and get the output
    vector<int> output = closestNumbers(arr);

    // Output the result
    for (size_t i = 0; i < output.size(); i++) {
        cout << output[i];

        if (i != output.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}

// Function to trim leading whitespaces from a string
string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
    return s;
}

// Function to trim trailing whitespaces from a string
string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end());
    return s;
}

// Function to split a string by spaces and return a vector of tokens
vector<string> split(const string &str) {
    vector<string> tokens;
    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
