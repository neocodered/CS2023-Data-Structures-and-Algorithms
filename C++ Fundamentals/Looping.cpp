#include <iostream>
using namespace std;

int main() {

    // For loop
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << "\n";
    }

    // Break:
    int i_break = 0;
    while (i_break < 10) {
        cout << i_break << "\n";
        i_break++;
        if (i_break == 4) {
            break;
        }
    }

    // Continue:
    int i_continue = 0;
    while (i_continue < 10) {
        if (i_continue == 4) {
            i_continue++;
            continue;
        }
        cout << i_continue << "\n";
        i_continue++;
    }

    // While loop
    int i_while = 0;
    while (i_while < 5) {
        cout << i_while << "\n";
        i_while++;
    }

    // Do while loop
    int i_do_while = 0;
    do {
        cout << i_do_while << "\n";
        i_do_while++;
    } while (i_do_while < 5);

    // Nested loop
    for (int i_outer = 1; i_outer <= 2; ++i_outer) {
        cout << "Outer: " << i_outer << "\n"; // Executes 2 times

        // Inner loop
        for (int j_inner = 1; j_inner <= 3; ++j_inner) {
            cout << " Inner: " << j_inner << "\n"; // Executes 6 times (2 * 3)
        }
    }

    return 0;
}
