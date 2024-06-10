#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <queue>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, k, operations = 0;
    ;
    cin >> n;
    cin >> k;

    priority_queue<int> p;

    for (int a = 0; a < n; a++)
    {
        int cookie;
        cin >> cookie;
        p.push(cookie * -1);
    }

    while (p.top() > k * -1 && p.size() > 1)
    {
        int cookie1, cookie2, newCookie;

        cookie1 = p.top();
        p.pop();

        cookie2 = p.top();
        p.pop();

        newCookie = cookie1 + 2 * cookie2;
        p.push(newCookie);

        operations++;
    }

    if (p.top() > k * -1)
        cout << "-1";
    else
        cout << operations;

    return 0;
}

//////////////////////////////

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <queue>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, k, operations = 0; // Variables to store input values and operations count
    cin >> n; // Read the number of cookies
    cin >> k; // Read the desired sweetness level

    priority_queue<int> p; // Priority queue to store sweetness levels of cookies

    // Read sweetness levels of cookies and push them to the priority queue
    for (int a = 0; a < n; a++)
    {
        int cookie;
        cin >> cookie;
        p.push(cookie * -1); // Push the negative of sweetness level to have minimum element on top
    }

    // Combine cookies until the least sweet cookie satisfies the sweetness threshold or there's only one cookie left
    while (p.top() > k * -1 && p.size() > 1)
    {
        int cookie1, cookie2, newCookie;

        cookie1 = p.top(); // Extract the least sweet cookie
        p.pop();

        cookie2 = p.top(); // Extract the second least sweet cookie
        p.pop();

        newCookie = cookie1 + 2 * cookie2; // Combine two least sweet cookies
        p.push(newCookie); // Push the combined sweetness back to the queue

        operations++; // Increment the operations count
    }

    // Output the result: -1 if no cookie satisfies the sweetness threshold, otherwise output the operations count
    if (p.top() > k * -1)
        cout << "-1";
    else
        cout << operations;

    return 0;
}




//////////////////////

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cookies' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 */

int cookies(int k, vector<int> A) {

}

int main()
{
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string A_temp_temp;
    getline(cin, A_temp_temp);

    vector<string> A_temp = split(rtrim(A_temp_temp));

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        int A_item = stoi(A_temp[i]);

        A[i] = A_item;
    }

    int result = cookies(k, A);

    cout << result << "\n";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

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
