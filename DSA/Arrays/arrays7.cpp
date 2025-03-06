/*
Problem Statement: Finding the Second Largest Element in an Array
Description:
Write a C++ program that finds the second largest element in an array of integers.

Task:

Initialize an array of integers with some values.

Use a loop to iterate over the array and find the maximum and second maximum elements.

Print the second largest element.

Topics Required:
Array Declaration and Initialization: Declare and initialize an array with specific values.

Looping: Use a loop to iterate over the array elements.

Conditional Statements: Use conditional statements to compare elements and find the maximum and second maximum.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {10, 20, 30, 40, 50};
Looping Over Array Elements:

cpp
for (int i = 0; i < 5; i++) {
    // Perform operations on myArray[i]
}
Finding Maximum and Second Maximum:

cpp
if (myArray[i] > max) {
    secondMax = max;
    max = myArray[i];
} else if (myArray[i] > secondMax && myArray[i] != max) {
    secondMax = myArray[i];
}
Printing the Second Maximum:

cpp
cout << "Second largest element: " << secondMax << endl;
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Initialize Maximum and Second Maximum: Set the maximum and second maximum variables.

Find Maximum and Second Maximum: Use a loop to iterate over the array and update the maximum and second maximum elements.

Print the Second Maximum: Display the second largest element.

Test Cases:
Test Case 1:

Input: Array = {10, 20, 30, 40, 50}

Expected Output: Second largest element = 40

Test Case 2:

Input: Array = {50, 40, 30, 20, 10}

Expected Output: Second largest element = 40

Test Case 3:

Input: Array = {10, 10, 10, 10, 10}

Expected Output: Handle this case appropriately (e.g., print "No second largest element").

Explanation:
Initialization: Use the syntax int myArray = {10, 20, 30, 40, 50}; to initialize the array.

Finding Maximum and Second Maximum: Use a for loop to iterate over the array and update the maximum and second maximum elements.
*/

#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int max=0;
    int second_max=0;

    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    for(int i=0;i<5;i++){
        if(a[i]>second_max&&a[i]!=max){
            second_max=a[i];
        }
    }
    cout<<"max element: "<<max<<endl;
    cout<<"second max element: "<<second_max<<endl;
}