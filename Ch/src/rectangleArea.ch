
    /* 
    Problem:
    The area of a rectangle of length l and width w is given by the formula: a = l*w
    */

    /// Declaration of variables

    double length; //Variable to store length of rectangle.
    double width; //Variable to store width of rectangle.
    double area; //Variable to store total area of rectangle

    ///User Input

    //Asking user for length and width of rectangle 

    printf("What is the length and width of your rectangle?: \n");

    scanf("%lf %lf", &length, &width); // Storing user input into pointers referencing our variables.

    ///Calculations

    area = length * width; //Formula to find area

    ///Result

    printf("The area is %.2lf \n", area);
