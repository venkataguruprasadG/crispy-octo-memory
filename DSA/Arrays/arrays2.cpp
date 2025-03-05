/*
Problem Statement: Finding the Maximum Element in an Array
Description:
Write a C++ program that finds the maximum element in an array of integers.

Task:

Initialize an array of integers with some values.

Use a loop to iterate over the array and find the maximum element.

Print the maximum element.

Topics Required:
Array Declaration and Initialization: Declare and initialize an array with specific values.

Looping: Use a loop to iterate over the array elements.

Conditional Statements: Use conditional statements to compare elements and find the maximum.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {10, 20, 30, 40, 50};
Looping Over Array Elements:

cpp
for (int i = 0; i < 5; i++) {
    // Perform operations on myArray[i]
}
Conditional Statements for Finding Maximum:

cpp
if (myArray[i] > maxElement) {
    maxElement = myArray[i];
}
Printing the Maximum Element:

cpp
std::cout << "Maximum element: " << maxElement << std::endl;
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Initialize Maximum Element: Set the first element as the initial maximum.

Find Maximum Element: Use a loop to iterate over the array and update the maximum element if necessary.

Print the Maximum Element: Display the maximum element found.

Test Cases:
Test Case 1:

Input: Array = {10, 20, 30, 40, 50}

Expected Output: Maximum element = 50

Test Case 2:

Input: Array = {50, 40, 30, 20, 10}

Expected Output: Maximum element = 50

Test Case 3:

Input: Array = {10, 10, 10, 10, 10}

Expected Output: Maximum element = 10

Explanation:
Initialization: Use the syntax int myArray = {1, 2, 3, 4, 5}; to initialize the array.

Finding Maximum: Use a for loop to iterate over the array and update the maximum element if a larger value is found.

Printing: Use std::cout to print the maximum element.
*/

#include<iostream>
using namespace std;

int main(){
    int myarray[5]={1, 2, 3, 10, 50};

    int maxElement=myarray[0];

    for(int i=0;i<=4;i++){
        if(myarray[i] > maxElement){
            maxElement = myarray[i];
        }
    }
    cout<<" Maximum Element: "<<maxElement<<endl;
    return 0;
}