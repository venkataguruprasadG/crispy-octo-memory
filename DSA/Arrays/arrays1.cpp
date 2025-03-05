/*
Problem Statement: Array Initialization and Modification
Description:
Write a C++ program that initializes an array of integers, modifies its elements, and then prints the modified array.

Task:

Initialize an array of 5 integers with values from 1 to 5.

Modify the array by doubling each element's value.

Print the modified array.

Topics Required:
Array Declaration: Declare an array with a specific size.

Array Initialization: Initialize the array with specific values.

Looping: Use a loop to iterate over the array elements.

Element Modification: Modify each element in the array.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {1, 2, 3, 4, 5};
Looping Over Array Elements:

cpp
for (int i = 0; i < 5; i++) {
    // Perform operations on myArray[i]
}
Modifying Array Elements:

cpp
myArray[i] *= 2; // Double the value of each element
Printing Array Elements:

cpp
std::cout << myArray[i] << " ";
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Modify Array Elements: Use a loop to double each element's value.

Print the Modified Array: Use another loop to print the modified elements.

Test Cases:
Test Case 1:

Input: Array size = 5, initial values = {1, 2, 3, 4, 5}

Expected Output: Modified array = {2, 4, 6, 8, 10}

Test Case 2:

Input: Array size = 5, initial values = {10, 20, 30, 40, 50}

Expected Output: Modified array = {20, 40, 60, 80, 100}

Explanation:
Initialization: Use the syntax int myArray = {1, 2, 3, 4, 5}; to initialize the array.

Modification: Use a for loop to iterate over the array and double each element's value.

Printing: Use another for loop to print the modified array elements.
*/

#include<iostream>
using namespace std;

int main(){
    int myArray[5] = {1, 2, 3, 4, 5};
    int doubler;
    cout<<"Enter the value with which you want to double the array: ";
    cin>>doubler;

    for(int i=0;i<=5;i++){
        myArray[i] *= doubler;
    }

    cout<<"Modified array: "<<endl;
    for(int i=0;i<=5;i++){
        cout<<myArray[i]<<" "<<endl;
    }
    return 0;
}