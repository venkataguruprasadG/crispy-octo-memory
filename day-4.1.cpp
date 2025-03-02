/*Problem Statement: Area and Perimeter of a Rectangle
Description:
Write a C++ program that calculates the area and perimeter of a rectangle. The program should prompt the user to input the length and width of the rectangle and then display the calculated area and perimeter.

Topics Required:
Variables and Data Types: Use int or float for length and width.

Basic Input/Output: Use cin for input and cout for output.

Arithmetic Operations: Use multiplication and addition to calculate area and perimeter.

Syntax for the Required Topics:
Declaring Variables:

cpp
float length, width;
Taking Input:

cpp
std::cin >> length >> width;
Arithmetic Operations:

cpp
area = length * width;
perimeter = 2 * (length + width);
Problem Solution Outline:
Declare Variables: Store the length and width of the rectangle.

Take Input: Prompt the user to input the length and width.

Calculate Area and Perimeter: Use formulas to calculate the area and perimeter.

Print Results: Display the calculated area and perimeter.

Test Cases:
Test Case 1:

Input: Length = 5, Width = 3

Expected Output: Area = 15, Perimeter = 16

Test Case 2:

Input: Length = 10, Width = 4

Expected Output: Area = 40, Perimeter = 28

Test Case 3:

Input: Length = 7, Width = 2

Expected Output: Area = 14, Perimeter = 18

Test Case 4:

Input: Length = 0, Width = 5 (Invalid input)

Expected Output: Handle this case gracefully (e.g., display a message).

Explanation:
Input Handling: Use cin to read user input and store it in variables.

Arithmetic Operations: Use multiplication for area and addition for perimeter calculations.

Error Handling: Implement checks for invalid inputs like zero or negative dimensions.*/

#include<iostream>
using namespace std;

int main(){
    float length, breadth;
    // Loop to ensure valid input
    while(true) {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
        if(length > 0 && breadth > 0) {
            break; // Exit loop if input is valid
        } else {
            cout << "Invalid Input. Please enter positive values." << endl;
        }
    }
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    cout << "Area = " << area << ", Perimeter = " << perimeter << endl;
    return 0;
}
