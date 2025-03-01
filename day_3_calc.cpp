/*Problem Statement: Basic Calculator Program
Description:
Write a C++ program that acts as a basic calculator. It should take two numbers and an operator as input from the user and perform the specified operation.

Topics Required:
Variables and Data Types: Use int or float for numbers and char for the operator.

Operators: Use basic arithmetic operators like +, -, *, /.

Control Structures: Use if-else statements to handle different operators.

Syntax for the Required Topics:
Declaring Variables:

cpp
int num1, num2;
char operator;
Taking Input:

cpp
cin >> num1 >> operator >> num2;
If-Else Statements:

cpp
if (operator == '+') {
    // code for addition
} else if (operator == '-') {
    // code for subtraction
}
Problem Solution Outline:
Declare Variables: Store two numbers and an operator.

Take Input: Get the numbers and operator from the user.

Perform Operations: Use if-else statements to perform the specified operation.

Print Result: Display the result of the operation.

Test Cases:
Test Case 1:

Input: 10 + 5

Expected Output: 15

Test Case 2:

Input: 20 - 8

Expected Output: 12

Test Case 3:

Input: 4 * 6

Expected Output: 24

Test Case 4:

Input: 15 / 3

Expected Output: 5

Explanation:
Handling Operators: Use if-else statements to handle different operators.

Input Validation: Consider validating user input to ensure it matches expected formats*/

#include<iostream>

int main(){
    int num1, num2;
    char op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the operator (+, -, *, /, %): ";
    std::cin >> op;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if(op == '+'){
        std::cout << "Result: " << num1 + num2 << std::endl;
    }
    else if(op == '-'){
        std::cout << "Result: " << num1 - num2 << std::endl;
    }
    else if(op == '*'){
        std::cout << "Result: " << num1 * num2 << std::endl;
    }
    else if(op == '/'){
        if(num2 != 0){
            std::cout << "Result: " << (double)num1 / num2 << std::endl; // Floating-point division
        }
        else{
            std::cout << "Error: Division by zero!" << std::endl;
        }
    }
    else if(op == '%'){
        if(num2 != 0){
            std::cout << "Result: " << num1 % num2 << std::endl;
        }
        else{
            std::cout << "Error: Modulus by zero!" << std::endl;
        }
    }
    else{
        std::cout << "Invalid operator!" << std::endl;
    }
    return 0;
}
