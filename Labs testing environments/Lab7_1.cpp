#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    long long int c;
    vector<long int> v;

    // Read the number of queries
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 1)
        {
            // Add an element
            cin >> c;
            v.push_back(c);
            push_heap(v.begin(), v.end(), greater<long long int>());
        }
        else if (c == 3)
        {
            // Print the minimum element
            printf("%ld\n", v.front());
        }
        else if (c == 2)
        {
            // Delete an element
            cin >> c;
            vector<long int>::iterator it;
            for (it = v.begin(); it != v.end(); it++)
            {
                if (*it == c)
                {
                    v.erase(it);
                    break;
                }
            }
            make_heap(it, v.end(), greater<long long int>());
        }
    }

    return 0;
}




/////////////////

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n; // Variable to store number of queries
    long long int c; // Variable to store command type or element value
    vector<long int> v; // Vector to store elements

    // Read the number of queries
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c; // Read command type
        if (c == 1)
        {
            // Add an element
            cin >> c;
            v.push_back(c); // Push the element to the vector
            push_heap(v.begin(), v.end(), greater<long long int>()); // Re-arrange the heap
        }
        else if (c == 3)
        {
            // Print the minimum element
            printf("%ld\n", v.front());
        }
        else if (c == 2)
        {
            // Delete an element
            cin >> c;
            vector<long int>::iterator it; // Iterator to traverse the vector
            for (it = v.begin(); it != v.end(); it++)
            {
                if (*it == c)
                {
                    v.erase(it); // Erase the element
                    break;
                }
            }
            make_heap(it, v.end(), greater<long long int>()); // Re-arrange the heap
        }
    }

    return 0;
}
