# C Programming Writing Assignment 
Submission for EEE125 C Programming Writing Assignment Semester 1.

## Project Description 
This program allows the user to **input** a series of values of the resistors ranging from **2-10** inclusive.
The values inputed from the user are stored in an array. The values then are sequentially displayed to the user stating `Resistance Number` and the `value` associated with it.
The program then asks the user to choose one of the following there options
    - Calculate and display the **Mean Value** for this set of resistor values
    - Calculate and display the **Standard Deviation** within this set of resistor values
    - Identify and display the **Largest Number** in this set of resistor values
After this, the program allows the user to go back and repeat the previous steps, retaining the **original values** inputed by the user and allowing the user to either choose one of 
the three options again or move on.
Finally, the program asks the user if they wish to start the program again and enter **new resistor values** or to end the program.

## Installing and running the project
To clone the repository use:
    `git clone` https://github.com/AmaanMujawar/EEE125-C-Writing-Assignment.git
Then navigate to the directory where the *resistance.c* file is located.

###### Running the code in DevC++
Import the file in DevC++ and click `build and run`
The project file should now compile and run

###### Running the code using GCC
`cd` into the file directory where *resistance.c* is located
then compile the project file using `gcc resistance.c`
and run the executable file using `./a.out`