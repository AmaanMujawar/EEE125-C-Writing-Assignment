# C Programming Writing Assignment 
Submission for EEE125 C Programming Writing Assignment, Semester 1.

## Project Description 
This program allows the user to **input** the number of resistors to be tested.

The <ins>max range</ins> for the number of resistors that can be inputed by the user are between and including **2 - 10**.

Then, the program sequentially allows the user to **input** values for each of the resistors. The values inputed from the user are stored in an array. The values then are sequentially displayed to the user stating `Resistance Number` and the `value` associated with it.

The <ins>max range</ins> of the resistor values that can be inputed by the user are between **1mOhms - 1MOhms**.

The program then asks the user to choose one of the following three options;

* Calculate and display the **Mean Value** for this set of resistor values
* Calculate and display the **Standard Deviation** within this set of resistor values
* Identify and display the **Largest Number** in this set of resistor values

After this, the program allows the user to go back and repeat the previous steps, retaining the **original values** inputed by the user and allowing the user to either choose one of 
the three options again or move on.

Finally, the program asks the user if they wish to start the program again and enter **new resistor values** or to end the program.

## Installing and running the project

1. Clone the project using

    `git clone` https://github.com/AmaanMujawar/EEE125-C-Writing-Assignment.git

    **or** alternatively download the zip file.

2. Then navigate to the directory where the *resistance.c* file is located.

###### Running the code in Dev-C++
1. Open Dev-C++ and create a new empty console application project with a suitable name.
2. Delete the *main.cpp* file that was generated by right clicking and `Remove from Project`
3. Right-click on **linkedList** folder located in the left pannel.
4. Select **Add to Project** and browse the location of file *resistance.c*.
5. To compile go to the `Execute` menu and select `Compile`.
6. To run go to the `Execute` menu and select `Run`.