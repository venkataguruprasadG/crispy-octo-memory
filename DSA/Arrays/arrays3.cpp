/*
Problem Statement: Finding the Sum of Even Numbers in an Array
Description:
Write a C++ program that calculates the sum of all even numbers in a given array.

Task:

Initialize an array of integers with some values.

Use a loop to iterate over the array and check each element to see if it's even.

If an element is even, add it to a running total.

Print the sum of all even numbers.

Topics Required:
Array Declaration and Initialization: Declare and initialize an array with specific values.

Looping: Use a loop to iterate over the array elements.

Conditional Statements: Use conditional statements to check if a number is even.

Arithmetic Operations: Use addition to accumulate the sum of even numbers.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {1, 2, 3, 4, 5};
Looping Over Array Elements:

cpp
for (int i = 0; i < 5; i++) {
    // Perform operations on myArray[i]
}
Checking if a Number is Even:

cpp
if (myArray[i] % 2 == 0) {
    // Number is even
}
Adding to the Sum:

cpp
sumOfEven += myArray[i];
Printing the Sum:

cpp
std::cout << "Sum of even numbers: " << sumOfEven << std::endl;
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Initialize Sum Variable: Set a variable to store the sum of even numbers to 0.

Find Sum of Even Numbers: Use a loop to iterate over the array, check each element for being even, and add it to the sum if it is.

Print the Sum: Display the total sum of even numbers.

Test Cases:
Test Case 1:

Input: Array = {1, 2, 3, 4, 5}

Expected Output: Sum of even numbers = 6 (2 + 4)

Test Case 2:

Input: Array = {10, 20, 30, 40, 50}

Expected Output: Sum of even numbers = 150 (10 + 20 + 30 + 40 + 50)

Test Case 3:

Input: Array = {1, 3, 5, 7, 9}

Expected Output: Sum of even numbers = 0

Explanation:
Initialization: Use the syntax int myArray = {1, 2, 3, 4, 5}; to initialize the array.

Checking for Even Numbers: Use the modulo operator (%) to check if a number is even (remainder when divided by 2 is 0).
*/

#include<iostream>
using namespace std;

int main(){
    int array3[5]={1, 2, 3, 50, 66};
    int sum=0;

    for(int i=0;i<5;i++){
        if(array3[i]%2==0){
            sum+=array3[i];
        }
    }
    cout<<"sum value of all even numbers: "<<sum<<endl;
}