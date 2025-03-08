/*
Problem Statement: Array Sum
Description:
Write a Python program that calculates the sum of all elements in a given array. This task involves basic input/output operations, variables, and loops.

Topics Required:
Basic Input/Output: Reading input from the user and printing output.

Variables and Data Types: Understanding how to declare and use variables.

Loops: Using loops to iterate over the array elements.

Syntax for the Required Topics:
Basic Input/Output:

python
# Reading input
array_size = int(input("Enter the size of the array: "))
# Printing output
print("Sum of the array:", sum_of_array)
Variables and Data Types:

python
# Declaring a variable
array = []
# Using a variable
array.append(10)
Loops:

python
# Using a loop to iterate over array elements
for i in range(array_size):
    element = int(input("Enter element {}: ".format(i+1)))
    array.append(element)
Problem Solution Outline:
Read Array Size: Ask the user to input the size of the array.

Input Array Elements: Use a loop to input each element of the array.

Calculate Sum: Iterate over the array and sum all its elements.

Test Cases:
Test Case 1:

Input: Array size = 3, elements =

Expected Output: Sum = 6

Test Case 2:

Input: Array size = 4, elements =

Expected Output: Sum = 22

Test Case 3:

Input: Array size = 0

Expected Output: Sum = 0

Explanation:
Input Handling: Use input() to read user input and convert it to appropriate data types.

Loop Iteration: Use a for loop to iterate over the array and calculate the sum.
*/

#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int sum=0;
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        sum+=a[i];
    }
    cout<<sum;
}