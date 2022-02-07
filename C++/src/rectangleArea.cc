//   This is free and unencumberd software released into the public domain. For more information, please refer to <https://unlicense.org/>

#include <iostream> // This header file defines several data types, macros, and functions dealing with user input and output

using namespace std; // Optional for this program , but makes code cleaner to read.

// The main function is the starting and ending point for our program. All the code we write will be contained in the main function.

int main(void){
    /* 
    Problem:
    The area of a rectangle of length l and width w is given by the formula: a = l*w
    */

    /// Declaration of variables

    double length; //Variable to store length of rectangle.
    double width; //Variable to store width of rectangle.
    double area; //Variable to store total area of rectangle

    cout << "What is the length and width of the rectangle?: " << endl; //Tells user to enter length and width.
    cin >> length >> width; //Stores length and width from user input into variables

    ///Calculations

    area = length * width;

    ///Result

    cout << "The area is " << area << endl;
}