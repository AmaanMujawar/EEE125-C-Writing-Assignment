//
// This program performs arithmetic calcualtions and sorting algorithms
// from user input values in order to calculate:
//      - Mean
//      - Standard Deviation
//      - Largest Number
// 
// This code has been designed, debugged and executed on 'Visual Studio
// 2022' using the MSVC compiler.
// 
// NOTE: Other compilers such as GCC may fail to build and execute
// the code, hence use Visual Studio 2022 to build and execute 
// the code.
// 
// Amaan Mujawar - University of Sheffield
// GitHub:https://github.com/AmaanMujawar/EEE125-C-Writing-Assignment.git
//

#include <stdio.h>                                                                      // Defining Libraries used
#include <conio.h>                                                                      // Used for '_getch() function'
#include <stdlib.h>
#include <math.h>                                                                       // Used for 'pow()' and 'sqrt()'                                                                      
#define _CRT_SECURE_NO_WARNINGS                                                         // Disable 'scanf()' warnings                                      


int i;                                                                                  // Declaring integer variables used
int input;
int select;


float sum;                                                                              // Declaring float variables used
float large;
float stddev;
float resistance[10];                                                                   // Declaring array


typedef enum {                                                                          // Defining an enum to be used for
    True = 1,                                                                           // switch case statements
    False = 2
} BOOL;


BOOL active;                                                                            // Globally declaring varaible active 


int keyClearScreen() {                                                                  // This function allows user to input
    printf("Press any key to continue... ");                                            // any key to clear screen and continue
    printf("%c", _getch());                                                             // the execution of the program
    system("cls");                                                                      // As per Windows OS, for linux or
    return 0;                                                                           // Mac OS use 'system("clear")'
}


int displayScreen(void) {                                                               // Displays useful information about
    printf("Resistance v1.6.8 \n");                                                     // the program
    printf("Calculate mean, stardard deviation & largest number from UI \n");
    printf("GitHub: \n");
    keyClearScreen();
    return 0;
}


int userInput(void) {                                                                   // Getting user input from user  
    printf("Enter number of resistance values to be entered [2-10]: ");                 // inputed in the range of 2 to 10
    scanf_s("%d", &input);
    while ((input) < 2 || (input) > 10) {                                               // Setting value bounds for acceptable
        system("cls");                                                                  // range of values that can be inputed
        printf("The available range is from and including 2 - 10. \n");                 // by the user
        printf("Please try again... \n");
        printf("Enter number of resistance values to be entered [2-10]: ");
        scanf_s("%d", &input);
    }
    system("cls");
    return 0;
}


int displayResValues() {
    for (i = 0; i != (input); i++) {                                                    // Display values stored in the
        printf("Value of Resistor %d \t %f \n", (i + 1), resistance[i]);                // array
    }
    return 0;
}

int resValues(void) {                                                                   // Stores user input values into an
    for (i = 0; i != (input); i++) {                                                    // array 'resistance[10]'
        printf("Enter value of resistor %d in Ohms [1mOhms-1MOhms]: ", (i + 1));
        scanf_s("%f", &resistance[i]);
        while ((resistance[i]) < 0.001 || (resistance[i]) > 1000000) {
            system("cls");
            printf("The available range is from and including 1 mOhms - 1 MOhms \n");
            printf("Please try again... \n");
            printf("Enter value of resistor %d : ", (i + 1));
            scanf_s("%f", &resistance[i]);
        }
    }
    system("cls");
    printf("The resistance of %d resistors are as follows...\n", input);                // Displays values stored in the                                                                
    return 0;                                                                           // array
}


int mean(void) {                                                                        // Calculates the mean value of the 
    for (i = 0; i != (input); i++) {                                                    // values stored in the array and
        sum = sum + resistance[i];                                                      // displays the value to the user
    }
    sum = sum / input;
    printf("The Mean Value of input resistances is: %f \n", sum);
    return 0;
}


int standardDev(void) {                                                                 // Calculates the standard deviation 
    mean();                                                                             // of the values stored in the array
    system("cls");                                                                      // and displays the value to the user
    stddev = 0;
    for (i = 0; i != (input); i++) {
        stddev = stddev + pow((resistance[i] - sum), 2);
    }
    stddev = sqrt(stddev / (input - 1));
    printf("The Standard Deviation of input resistances is %f \n", stddev);
    return 0;
}


int largest(void) {                                                                     // Sorts through the largest number in
    large = resistance[0];                                                              // the array and displays it to the 
    for (i = 0; i != (input); i++) {                                                    // user
        if (resistance[i] > large) {
            large = resistance[i];
        }
    }
    printf("Largest value of input resistance is %f \n", large);
    return 0;
}


int userSelect(void) {                                                                  // Displays a list of available options
    displayResValues();                                                                 // to the user to select
    printf("|-----------------------------------|\n");
    printf("|1: Calculate the mean value        |\n");
    printf("|-----------------------------------|\n");
    printf("|2. Calculate the standard deviation|\n");
    printf("|-----------------------------------|\n");
    printf("|3. Sort the largest value          |\n");
    printf("|-----------------------------------|\n");
    printf("|4. Exit                            |\n");
    printf("|-----------------------------------|\n");
    printf("Select from the options listed [1|2|3|4]: ");
    scanf_s("%d", &select);
    system("cls");
    switch (select)                                                                     // Switch-Case statement selects the 
    {                                                                                   // function respective to user input 
    case 1:                                                                             // Case 1 for calculating mean
        printf("Calculating the mean value... \n");
        mean();
        break;
    case 2:                                                                             // Case 2 for calculating standard
        printf("Calculating the standard deviation... \n");                             // deviation
        standardDev();
        break;
    case 3:                                                                             // Case 3 for sorting the largest 
        printf("Sorting the largest value... \n");                                      // value 
        largest();
        break;
    case 4:                                                                             // Case 4 exit
        printf("Exiting... \n");
        exit(0);
        break;
    }
    return 0;
}


int reRun(void) {
    BOOL run;
    run = True;
    while ((run) == True) {
        userSelect();
        keyClearScreen();
        printf("|---------------------------------------------------|\n");
        printf("|1. Yes - Start code again clearining initial values|\n");
        printf("|---------------------------------------------------|\n");
        printf("|2. Yes - Start code again by reusing initial values|\n");
        printf("|---------------------------------------------------|\n");
        printf("|3. No - Exit                                       |\n");
        printf("|---------------------------------------------------|\n");
        printf("Select from the options listed [1|2|3]: ");
        scanf_s("%d", &run);
        system("cls");
        switch (run)
        {
        case 1:
            printf("Initialising... \n");
            sum = 0;
            run = False;
            active = True;
            break;
        case 2:
            printf("Initialising... \n");
            sum = 0;
            run = True;
            break;
        case 3:
            printf("Exiting... \n");
            run = False;
            active = False;
            break;
        }
    }

    return 0;
}


int activeCode(void) {                                                                  // Function allows users to check
    active = True;                                                                      // if they want to continue the
    while ((active) == True) {                                                          // program again after initial
        displayScreen();                                                                // execution
        userInput();
        resValues();
        userSelect();
        keyClearScreen();
        printf("|---------------------------------------------------|\n");
        printf("|1. Yes - Start code again clearining initial values|\n");
        printf("|---------------------------------------------------|\n");
        printf("|2. Yes - Start code again by reusing initial values|\n");
        printf("|---------------------------------------------------|\n");
        printf("|3. No - Exit                                       |\n");
        printf("|---------------------------------------------------|\n");
        printf("Select from the options listed [1|2|3]: ");                             // Asks user to select wether to
        scanf_s("%d", &active);                                                         // start again or to exit
        system("cls");
        switch (active)
        {
        case 1:                                                                         // Case 1 for restarting clearing
            printf("Clearing initial values... \n");                                    // initial values
            sum = 0;
            printf("Initialising... \n");
            active = True;
            break;
        case 2:                                                                         // Case 2 for re-running using
            sum = 0;                                                                    // Clearing values for initial run
            reRun();                                                                    // Initial values
            break;
        case 3:                                                                         // Case 3 exit
            printf("Exiting... \n");
            active = False;
        }
    }
    return 0;

}


int main() {                                                                            // Main function
    activeCode();
}
