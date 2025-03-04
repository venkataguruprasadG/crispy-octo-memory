/*
Problem Statement: Multiplication Table Printer
Description:
Write a C++ program that prints a multiplication table for a given number. The program should prompt the user to input a number and then display the multiplication table for that number up to a certain limit (e.g., 10).

Topics Required:
Variables and Data Types: Use int for the input number and multiplier.

Basic Input/Output: Use cin for input and cout for output.

Loops: Use a for loop to generate the multiplication table.

Syntax for the Required Topics:
Declaring Variables:

cpp
int number, multiplier, limit;
Taking Input:

cpp
cin >> number;
For Loop:

cpp
for (multiplier = 1; multiplier <= limit; multiplier++) {
    // Print multiplication table entry
}
Problem Solution Outline:
Declare Variables: Store the input number and the limit for the multiplication table.

Take Input: Prompt the user to input a number.

Generate Multiplication Table: Use a for loop to print each entry in the multiplication table.

Print Results: Display the multiplication table.

Test Cases:
Test Case 1:

Input: Number = 5, Limit = 10

Expected Output: Multiplication table for 5 up to 10.

Test Case 2:

Input: Number = 3, Limit = 5

Expected Output: Multiplication table for 3 up to 5.

Test Case 3:

Input: Number = 0

Expected Output: Handle this case gracefully (e.g., display a message).

Test Case 4:

Input: Non-integer input (e.g., "abc")

Expected Output: Handle invalid input gracefully.

Explanation:
Input Handling: Use cin to read user input and store it in variables.

Loop Control: Use a for loop to iterate through multipliers.

Error Handling: Implement checks for invalid inputs like non-integer values.
*/

#include<iostream>
using namespace std;

int main(){
    int number,multiplier,limit;
    cout<<"Enter number: ";
    cin>>number;

    if (!(std::cin)) { // Check for invalid input
        std::cout << "Invalid input. Please enter an integer." << std::endl;
        return 1; // Exit with error code
    }
    
    cout<<"Enter your limit number: ";
    cin>>limit;


    for(multiplier=1;multiplier<=limit;multiplier++){
        cout<<number<<" * "<<multiplier<<" = "<<number*multiplier<<endl;
    }
    return 0;
}