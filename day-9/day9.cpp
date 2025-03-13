/*
Problem Statement: Simple Calculator Program
Description:
Write a C++ program that acts as a simple calculator. It should allow users to perform basic arithmetic operations like addition, subtraction, multiplication, and division.

Topics Required:
Variables and Data Types: Use float for numbers.

Basic Input/Output: Use cin for input and cout for output.

Conditional Statements: Use if-else or switch-case statements to handle different operations.

Syntax for the Required Topics:
Declaring Variables:

cpp
float num1, num2;
char operation;
Taking Input:

cpp
cin >> num1 >> operation >> num2;
If-Else Statements:

cpp
if (operation == '+') {
    // Perform addition
} else if (operation == '-') {
    // Perform subtraction
}
Problem Solution Outline:
Declare Variables: Store two numbers and the operation.

Take Input: Prompt the user to input two numbers and an operation.

Perform Operation: Use conditional statements to perform the chosen operation.

Print Results: Display the result of the operation.

Test Cases:
Test Case 1:

Input: 2 + 3

Expected Output: 5

Test Case 2:

Input: 5 - 2

Expected Output: 3

Test Case 3:

Input: 4 * 5

Expected Output: 20

Test Case 4:

Input: 10 / 2

Expected Output: 5

Test Case 5:

Input: Division by zero (e.g., 5 / 0)

Expected Output: Handle division by zero gracefully.

Test Case 6:

Input: Invalid operation (e.g., 2 ^ 3)

Expected Output: Handle invalid operations gracefully.

Explanation:
Input Handling: Use cin to read user input and store it in variables.

Operation Handling: Use conditional statements to perform different arithmetic operations.

Error Handling: Implement checks for division by zero and invalid operations.
*/

#include<iostream>
using namespace std;

int main(){
    float num1, num2;
    char op; // Renamed from 'operator' to 'op'

    cout << "Enter your number 1: ";
    cin >> num1;

    cout << "Enter your number 2: ";
    cin >> num2;

    cout << "Enter Operation which you want to perform: ";
    cin >> op;

    if(op == '+'){
        cout << "result = " << num1 + num2 << endl;
    }else if(op == '-'){
        cout << "result = " << num1 - num2 << endl;
    }else if(op == '*'){
        cout << "result = " << num1 * num2 << endl;
    }else if(op == '/'){
        if(num2 == 0){
            cout << "Invalid Input..!!" << endl;
        }else{
            cout << "result = " << num1 / num2 << endl;
        }
    }else{
        cout << "Invalid Operation" << endl;
    }
    return 0;
}