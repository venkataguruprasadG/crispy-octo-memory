/*
Problem Statement: Sum of Even Numbers
Description:
Write a C++ program that calculates the sum of all even numbers in a given range. The program should prompt the user to input the start and end of the range and then display the sum of all even numbers within that range.

Topics Required:
Variables and Data Types: Use int for the start, end, and sum variables.

Basic Input/Output: Use cin for input and cout for output.

Loops: Use a for loop to iterate through the range and sum even numbers.

Syntax for the Required Topics:
Declaring Variables:

cpp
int start, end, sum = 0;
Taking Input:

cpp
cin >> start >> end;
For Loop:

cpp
for (int i = start; i <= end; i++) {
    if (i % 2 == 0) {
        sum += i; // Add even number to sum
    }
}
Problem Solution Outline:
Declare Variables: Store the start and end of the range and the sum of even numbers.

Take Input: Prompt the user to input the start and end of the range.

Calculate Sum: Use a for loop to iterate through the range, check if each number is even, and add it to the sum.

Print Results: Display the sum of all even numbers in the range.

Test Cases:
Test Case 1:

Input: Start = 1, End = 10

Expected Output: Sum of even numbers = 2 + 4 + 6 + 8 + 10 = 30

Test Case 2:

Input: Start = 10, End = 20

Expected Output: Sum of even numbers = 10 + 12 + 14 + 16 + 18 + 20 = 90

Test Case 3:

Input: Start = 5, End = 5

Expected Output: Sum of even numbers = 0 (since 5 is odd)

Test Case 4:

Input: Non-integer input (e.g., "abc")

Expected Output: Handle invalid input gracefully.

Explanation:
Input Handling: Use cin to read user input and store it in variables.

Loop Control: Use a for loop to iterate through the range.

Even Number Check: Use the modulus operator (%) to check if a number is even.
*/

#include<iostream>
using namespace std;

int main(){
    int start, end, sum=0;
    
    std::cout << "Enter the start and end of the range: ";
    std::cin >> start >> end;

    if (!(std::cin)) { // Check for invalid input
        std::cout << "Invalid input. Please enter integers." << std::endl;
        return 1; // Exit with error code
    }
    
    for(int i=start;i<=end;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}