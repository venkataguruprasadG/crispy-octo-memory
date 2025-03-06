/*
Problem Statement: Checking if an Array is Sorted
Description:
Write a C++ program that checks if an array of integers is sorted in ascending order.

Task:

Initialize an array of integers with some values.

Use a loop to iterate over the array and check if each element is less than or equal to the next one.

Print whether the array is sorted or not.

Topics Required:
Array Declaration and Initialization: Declare and initialize an array with specific values.

Looping: Use a loop to iterate over the array elements.

Conditional Statements: Use conditional statements to compare adjacent elements.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {1, 2, 3, 4, 5};
Looping Over Array Elements:

cpp
for (int i = 0; i < n - 1; i++) {
    // Perform operations on myArray[i] and myArray[i + 1]
}
Checking if Array is Sorted:

cpp
if (myArray[i] > myArray[i + 1]) {
    cout << "Array is not sorted." << endl;
    return 0; // Exit early if array is not sorted
}
Printing Sorted Status:

cpp
cout << "Array is sorted." << endl;
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Check if Array is Sorted: Use a loop to iterate over the array and compare adjacent elements.

Print Sorted Status: Display whether the array is sorted or not.

Test Cases:
Test Case 1:

Input: Array = {1, 2, 3, 4, 5}

Expected Output: Array is sorted.

Test Case 2:

Input: Array = {5, 4, 3, 2, 1}

Expected Output: Array is not sorted.

Test Case 3:

Input: Array = {1, 3, 2, 4, 5}

Expected Output: Array is not sorted.

Explanation:
Initialization: Use the syntax int myArray = {1, 2, 3, 4, 5}; to initialize the array.

Checking Sorted Status: Use a for loop to iterate over the array and compare each element with the next one.
*/

#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    bool flagship=true;

    for(int i=0;i<5;i++){
        if(a[i]>a[i+1]){
            //cout<<"It is not sorted"<<endl;
            flagship=false;
        }
        /*else{
            cout<<"It is sorted"<<endl;
        }*/
    }

    if(flagship){
        cout<<"It is sorted";
    }
    else{
        cout<<"It is not sorted";
    }
    return 0;
}