/*
Problem Statement: Finding the First Duplicate in an Array
Description:
Write a C++ program that finds the first duplicate in an array of integers.

Task:

Initialize an array of integers with some values.

Use a loop to iterate over the array and check if each element has been seen before.

Print the first duplicate element found.

Topics Required:
Array Declaration and Initialization: Declare and initialize an array with specific values.

Looping: Use a loop to iterate over the array elements.

Conditional Statements: Use conditional statements to check if an element is a duplicate.

Searching: Use another loop or a data structure (like a set) to check if an element has been seen before.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {1, 2, 3, 2, 4};
Looping Over Array Elements:

cpp
for (int i = 0; i < n; i++) {
    // Perform operations on myArray[i]
}
Checking for Duplicates:

cpp
for (int j = 0; j < i; j++) {
    if (myArray[i] == myArray[j]) {
        cout << "First duplicate: " << myArray[i] << endl;
        return 0; // Exit early if duplicate found
    }
}
Printing No Duplicate Message:

cpp
cout << "No duplicates found." << endl;
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Find First Duplicate: Use nested loops to iterate over the array and check for duplicates.

Print Duplicate or No Duplicate Message: Display the first duplicate element or a message indicating no duplicates.

Test Cases:
Test Case 1:

Input: Array = {1, 2, 3, 2, 4}

Expected Output: First duplicate: 2

Test Case 2:

Input: Array = {1, 2, 3, 4, 5}

Expected Output: No duplicates found.

Test Case 3:

Input: Array = {2, 2, 3, 4, 5}

Expected Output: First duplicate: 2

Explanation:
Initialization: Use the syntax int myArray = {1, 2, 3, 2, 4}; to initialize the array.

Finding Duplicates: Use nested loops to compare each element with all previous elements.
*/

#include<iostream>
using namespace std;

int main(){
    /*int n;
    cin>>n;
*/
    int a[5]={1,2,3,4,3};
    bool flag=true;

    for(int i=0;i<5;i++){
        for(int j=0;i<5;j++){
            if(a[i]==a[j]){
                //cout<<"duplicate element found";
                flag=false;
                break;
            }
        }
    }
    if(flag) 
    cout<<"no duplicate element found";
    else
    cout<<"duplicate element found";
}