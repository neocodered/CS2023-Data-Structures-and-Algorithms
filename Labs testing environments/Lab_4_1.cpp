#include <iostream>
using namespace std;

int superDigit(string n, int k);

int main(){
    cout << superDigit("7373",2);
    return 0;
}

int superDigit(string n, int k) {
    string digitString = n;
    
    int string_len = digitString.size();
    if (string_len == 1 && k == 1){
        return stoi(n);
    }
    else if (string_len == 1) {
        int string_int = stoi(n)*k;
        string string_final = to_string(string_int);
        return superDigit(string_final,1);
    } else {
        int string_total = 0;  // Initialize string_total
        for (int i = 0; i < string_len; i++) {
            string_total += stoi(digitString.substr(i, 1));
        }
        return superDigit(to_string(string_total),k);  // Add return statement
    }
}