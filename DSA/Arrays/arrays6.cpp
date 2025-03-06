/*
Problem Statement: Sorting an Array in Ascending Order
Description:
Write a C++ program that sorts an array of integers in ascending order using the Bubble Sort algorithm.

Task:

Initialize an array of integers with some values.

Implement the Bubble Sort algorithm to sort the array in ascending order.

Print the original and sorted arrays.

Topics Required:
Array Declaration and Initialization: Declare and initialize an array with specific values.

Looping: Use nested loops to compare and swap elements.

Conditional Statements: Use conditional statements to check if elements need to be swapped.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {5, 2, 8, 1, 9};
Nested Looping for Bubble Sort:

cpp
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        // Compare and swap elements
    }
}
Comparing and Swapping Elements:

cpp
if (myArray[j] > myArray[j + 1]) {
    int temp = myArray[j];
    myArray[j] = myArray[j + 1];
    myArray[j + 1] = temp;
}
Printing Arrays:

cpp
cout << "Original array: ";
for (int i = 0; i < n; i++) {
    cout << myArray[i] << " ";
}
cout << endl;

cout << "Sorted array: ";
for (int i = 0; i < n; i++) {
    cout << myArray[i] << " ";
}
cout << endl;
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Print the Original Array: Display the original array.

Implement Bubble Sort: Use nested loops to compare and swap elements to sort the array.

Print the Sorted Array: Display the sorted array.

Test Cases:
Test Case 1:

Input: Array = {5, 2, 8, 1, 9}

Expected Output:

Original array: 5 2 8 1 9

Sorted array: 1 2 5 8 9

Test Case 2:

Input: Array = {10, 20, 30, 40, 50}

Expected Output:

Original array: 10 20 30 40 50

Sorted array: 10 20 30 40 50 (already sorted)

Test Case 3:

Input: Array = {9, 8, 7, 6, 5}

Expected Output:

Original array: 9 8 7 6 5

Sorted array: 5 6 7 8 9

Explanation:
Initialization: Use the syntax int myArray = {5, 2, 8, 1, 9}; to initialize the array.

Bubble Sort: Use nested loops to repeatedly compare adjacent elements and swap them if they are in the wrong order.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    int temp;
    cout<<"Enter your array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Printing the original array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }

    cout<<"printing the sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}