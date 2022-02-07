//   This is free and unencumberd software released into the public domain. For more information, please refer to <https://unlicense.org/>

#include <stdlib.h> // The stdlib.h header file defines four variable types, several macros, and various functions for performing general functions.
#include <stdio.h> // The stdio.h header file defines three variable types, several macros, and various functions for performing input and output.

//The main function is the starting and ending point of our program. All the code for this program will in the main function

int main(void){

    /* 

    Problem: The sale price of lemonade is $1.29 per cup. Write a program to calculate the cost of buying 3 cups of lemonade. 

    */

   /// Declaring all the variables we need:

    double price = 1.29; //This variable holds the current price. It is a double because we are using decimals.
    int cups = 3; // This variable holds how many cups the user bought.
    double total = cups * price; // This variable holds the total cost.

    ///Result

    /*  
    We are printing to the user the cost of buying X cups of lemonade at a price of Y per cup. %d and %lf are place holders for our varibles. 
    %d means a place holder for an integer. %lf means a place holder for a double. %.2lf means round the decimal at the hundreths place.
    */ 

    printf("The cost of buying %d cups of lemonade at a price of %.2lf costs $%.2lf. \n", cups, price, total);


    return 0; // At the end of our program the program returning 0 means the program ran successfully.
}
