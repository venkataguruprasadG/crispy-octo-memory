/*Problem Statement: Temperature Conversion
Description:
Write a C++ program that converts temperature from Celsius to Fahrenheit and vice versa. The program should prompt the user to choose whether they want to convert from Celsius to Fahrenheit or from Fahrenheit to Celsius. Based on the user's choice, it should ask for the temperature value and then display the converted temperature.

Topics Required:
Variables and Data Types: Use float for temperature values.

Basic Input/Output: Use cin for input and cout for output.

Conditional Statements: Use if-else statements to handle different conversion options.

Syntax for the Required Topics:
Declaring Variables:

cpp
float celsius, fahrenheit;
char choice;
Taking Input:

cpp
cin >> choice;
If-Else Statements:

cpp
if (choice == 'C') {
    // Convert Celsius to Fahrenheit
} else if (choice == 'F') {
    // Convert Fahrenheit to Celsius
}
Problem Solution Outline:
Declare Variables: Store the temperature values and the user's choice.

Take Input: Prompt the user to choose the conversion type and input the temperature value.

Perform Conversion: Use formulas to convert the temperature.

Celsius to Fahrenheit: fahrenheit = (celsius * 9 / 5) + 32

Fahrenheit to Celsius: celsius = (fahrenheit - 32) * 5 / 9

Print Results: Display the converted temperature.

Test Cases:
Test Case 1:

Input: Convert from Celsius to Fahrenheit, Celsius = 30

Expected Output: Fahrenheit = 86.00

Test Case 2:

Input: Convert from Fahrenheit to Celsius, Fahrenheit = 86

Expected Output: Celsius = 30.00

Test Case 3:

Input: Invalid choice (e.g., 'X')

Expected Output: Handle invalid input gracefully.

Explanation:
Input Handling: Use cin to read user input and store it in variables.

Conversion Formulas: Apply the correct formulas for temperature conversion.

Error Handling: Implement checks for invalid inputs like non-numeric values or incorrect conversion choices.*/

#include<iostream>
using namespace std;

int main(){
    float celsius, fahrenhiet;
    char choice;

    cout<< "Enter your choice: ";
    cin>>choice;

    if(choice == 'c' || choice == 'C'){
        cout<<"Enter the temperature in celsius: ";
        cin>>celsius;
        fahrenhiet = (celsius * 9 / 5.0) + 32;
        cout<<fahrenhiet<<" fahrenhiet in "<<celsius<<" celsius."<<endl;
    }
    else if(choice == 'f' || choice == 'F'){
        cout<<"Enter the temperature in fahrenhiet: ";
        cin>>fahrenhiet;
        celsius = (fahrenhiet - 32) * 5 / 9.0;
        cout<<celsius<<" celsius in "<<fahrenhiet<<" fahrenhiet. "<<endl;
    }
    return 0;
}