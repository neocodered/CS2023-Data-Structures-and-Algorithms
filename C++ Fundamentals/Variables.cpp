#include <iostream>
using namespace std;

int main(){
    //Variables
    int myNum = 5;
    double myFloatNum = 5.99;
    char myLetter = 'D';
    string myText = "Hello";
    bool myBoolean = true;

    //Declaring multiple variables
    int x=5,y=6,z=50;
    cout << x+y+z;

    int x,y,z;
    x=y=z=50;
    cout<<x+y+z;

    //constants 
    const int myNum = 15; //myNum will always be 15
    myNum = 10; //error: assignment of read-only variable 'myNum'

    //Getting the user input
    int x;
    cout << "Type a number: ";//Type a number and press enter
    cin >> x; //Get iser input from the keyboard
    cout << "Your number is: " <<x;//Display the input value
}

