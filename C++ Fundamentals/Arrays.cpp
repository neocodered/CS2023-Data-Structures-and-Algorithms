// Array

// string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
// cout << cars[0];

// Example:

#include <iostream>

using namespace std;

#include <iomanip>

using std::setw; //setw ia a function which is to set the space between the characters



int main () {

    int n[ 10 ]; // n is an array of 10 integers

    // initialize elements of array n to 0         

    for ( int i = 0; i < 10; i++ ) {

    n[ i ] = i + 100; // set element at location i to i + 100

    }

    cout << "Element" << setw( 13 ) << "Value" << endl;



    // output each array element's value                     

    for ( int j = 0; j < 10; j++ ) {

    cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;

    }

    return 0;

}
