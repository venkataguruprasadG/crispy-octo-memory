/*
Problem Statement: Rotating an Array by a Given Number of Positions
Description:
Write a C++ program that rotates an array of integers by a specified number of positions.

Task:

Initialize an array of integers with some values.

Ask the user to input the number of positions to rotate the array.

Rotate the array by the specified number of positions.

Print the rotated array.

Topics Required:
Array Declaration and Initialization: Declare and initialize an array with specific values.

User Input: Use cin to read the number of positions from the user.

Looping: Use a loop to rotate the array elements.

Array Manipulation: Use temporary variables or additional arrays to perform the rotation.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {1, 2, 3, 4, 5};
User Input:

cpp
int positions;
cin >> positions;
Rotating the Array:

Method A: Using Temporary Array

cpp
int temp[5];
for (int i = 0; i < 5; i++) {
    temp[(i + positions) % 5] = myArray[i];
}
for (int i = 0; i < 5; i++) {
    myArray[i] = temp[i];
}
Method B: In-Place Rotation

cpp
int n = sizeof(myArray) / sizeof(myArray[0]);
int temp = myArray[0];
for (int i = 0; i < n - 1; i++) {
    myArray[i] = myArray[i + 1];
}
myArray[n - 1] = temp;
// Repeat this process 'positions' times
Printing the Rotated Array:

cpp
cout << "Rotated array: ";
for (int i = 0; i < 5; i++) {
    cout << myArray[i] << " ";
}
cout << endl;
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Get User Input: Ask the user to input the number of positions to rotate.

Rotate the Array: Use a method to rotate the array by the specified number of positions.

Print the Rotated Array: Display the rotated array.

Test Cases:
Test Case 1:

Input: Array = {1, 2, 3, 4, 5}, Positions = 1

Expected Output: Rotated array = {5, 1, 2, 3, 4}

Test Case 2:

Input: Array = {1, 2, 3, 4, 5}, Positions = 2

Expected Output: Rotated array = {4, 5, 1, 2, 3}

Test Case 3:

Input: Array = {1, 2, 3, 4, 5}, Positions = 5

Expected Output: Rotated array = {1, 2, 3, 4, 5} (no change)

Explanation:
Initialization: Use the syntax int myArray = {1, 2, 3, 4, 5}; to initialize the array.

Rotation: Use a temporary array or in-place rotation method to shift the elements.
*/

#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int positions;
    cout<<"Enter number of positions you want to rotate: ";
    cin>>positions;

    int temp[5];
for (int i = 0; i < 5; i++) {
    temp[(i + positions) % 5] = arr[i];
}
for (int i = 0; i < 5; i++) {
    arr[i] = temp[i];
}

cout<<"Rotated array: ";

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}