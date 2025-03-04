/*
Problem Statement: Even or Odd Number Checker
Description:
Write a C++ program that checks whether a given integer is even or odd. The program should prompt the user to input an integer and then display whether it is even or odd.

Topics Required:
Variables and Data Types: Use int for the input integer.

Basic Input/Output: Use cin for input and cout for output.

Conditional Statements: Use if-else statements to check if the number is even or odd.

Syntax for the Required Topics:
Declaring Variables:

cpp
int number;
Taking Input:

cpp
cin >> number;
If-Else Statements:

cpp
if (number % 2 == 0) {
    // Number is even
} else {
    // Number is odd
}
Problem Solution Outline:
Declare Variables: Store the input integer.

Take Input: Prompt the user to input an integer.

Check if Even or Odd: Use the modulus operator (%) to determine if the number is even or odd.

Print Results: Display whether the number is even or odd.

Test Cases:
Test Case 1:

Input: Number = 10

Expected Output: "The number is even."

Test Case 2:

Input: Number = 11

Expected Output: "The number is odd."

Test Case 3:

Input: Number = 0

Expected Output: "The number is even."

Test Case 4:

Input: Non-integer input (e.g., "abc")

Expected Output: Handle invalid input gracefully.

Explanation:
Input Handling: Use cin to read user input and store it in a variable.

Even/Odd Check: Use the modulus operator (%) to check if the remainder when divided by 2 is 0 (even) or not (odd).

Error Handling: Implement checks for invalid inputs like non-integer values.
*/

#include <iostream>

int main() {
    int number;
    while (true) {
        std::cout << "Enter an integer: ";
        if (std::cin >> number) {
            break; // Exit loop if input is valid
        } else {
            std::cout << "Invalid input. Please enter an integer." << std::endl;
            std::cin.clear(); // Clear error flag
            std::cin.ignore(10000, '\n'); // Ignore remaining input
        }
    }
    if (number % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }
    return 0;
}
