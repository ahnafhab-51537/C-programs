//   This is free and unencumberd software released into the public domain. For more information, please refer to <https://unlicense.org/>

#include <iostream> // This header file defines several data types, macros, and functions dealing with user input and output

using namespace std; // Optional for this program , but makes code cleaner to read.

// The main function is the starting and ending point for our program. All the code we write will be contained in the main function.

int main(void){
    ///Declaring all the variables we need

    double price = 1.29; //This variable holds the current price. It is a double because we are using decimals.
    int cups = 3; // This variable holds how many cups the user bought.
    double total = cups * price; // This variable holds the total cost.

    ///Result

    //Printing to the user the cost of buying X cups of lemonade at a price of Y per cup. The keyword endl ends the line. Keywords not in quotes are varibles.
    cout << "The cost of buying " << cups << " of lemonade at a price of $" << price << " costs: " << total << endl;
    
}