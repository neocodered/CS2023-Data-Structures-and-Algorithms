#include <bits/stdc++.h>

using namespace std;

// Function to trim leading whitespaces from a string
string ltrim(const string &);
// Function to trim trailing whitespaces from a string
string rtrim(const string &);
// Function to split a string by spaces and return a vector of tokens
vector<string> split(const string &);

/*
 * Complete the 'lilysHomework' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int lilysHomework(vector<int> arr) {
    
    // Initialize vectors to store pairs of values and indexes
    vector<pair<int, int>> ascendingPairs;
    vector<pair<int, int>> descendingPairs;
    
    int arrSize = arr.size();

    // Fill vectors with values and their corresponding indexes
    for (long i = 0; i < arrSize; i++){
        ascendingPairs.push_back({arr[i], i});
        descendingPairs.push_back({arr[i], i});
    }

    // Sort the two arrays in ascending and descending order based on values
    sort(ascendingPairs.begin(), ascendingPairs.end());
    sort(descendingPairs.begin(), descendingPairs.end(), greater<pair<int, int>>());

    // Initialize counters for swaps
    int ascendingCount = 0;
    int descendingCount = 0;  

    // Count swaps needed for making the array sorted in ascending order
    for (long i = 0; i < arrSize; i++){
        while (i != ascendingPairs[i].second){
            swap(ascendingPairs[i], ascendingPairs[ascendingPairs[i].second]);
            ascendingCount++;
        }
    }
    
    // Count swaps needed for making the array sorted in descending order
    for (long i = 0; i < arrSize; i++){
        while (i != descendingPairs[i].second){
            swap(descendingPairs[i], descendingPairs[descendingPairs[i].second]);
            descendingCount++;
        }    
    }
    
    // Return the minimum count of swaps
    int output = min(ascendingCount, descendingCount);
    return output;
}

// Main function
int main()
{
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

    // Call the lilysHomework function and get the output
    int output = lilysHomework(arr);

    // Output the result
    cout << output << "\n";

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
