/*
Problem Statement: Searching for an Element in an Array
Description:
Write a C++ program that searches for a specific element in an array and reports whether it is found or not.

Task:

Initialize an array of integers with some values.

Ask the user to input a number to search for.

Use a loop to iterate over the array and check if the target number is present.

If the number is found, print a message indicating its presence. Otherwise, print a message stating it's not found.

Topics Required:
Array Declaration and Initialization: Declare and initialize an array with specific values.

User Input: Use cin to read input from the user.

Looping: Use a loop to iterate over the array elements.

Conditional Statements: Use conditional statements to check if the target number is found.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {1, 2, 3, 4, 5};
User Input:

cpp
int target;
cin >> target;
Looping Over Array Elements:

cpp
for (int i = 0; i < 5; i++) {
    // Perform operations on myArray[i]
}
Checking if Target is Found:

cpp
if (myArray[i] == target) {
    cout << "Target found!" << endl;
    // Optionally, break out of the loop
    break;
}
Printing Not Found Message:

cpp
if (i == 5) { // If loop completes without finding the target
    cout << "Target not found!" << endl;
}
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Get User Input: Ask the user to input a target number.

Search for Target: Use a loop to iterate over the array and check if the target number is present.

Print Result: Display whether the target number is found or not.

Test Cases:
Test Case 1:

Input: Array = {1, 2, 3, 4, 5}, Target = 3

Expected Output: Target found!

Test Case 2:

Input: Array = {1, 2, 3, 4, 5}, Target = 6

Expected Output: Target not found!

Test Case 3:

Input: Array = {10, 20, 30, 40, 50}, Target = 30

Expected Output: Target found!

Explanation:
Initialization: Use the syntax int myArray = {1, 2, 3, 4, 5}; to initialize the array.

User Input: Use cin to read the target number from the user.

Searching: Use a for loop to iterate over the array and check each element against the target.
*/

#include<iostream>
using namespace std;

int main(){
    int arrays4[]={1, 2, 3, 50, 20};
    int searchno;
    bool found = false;

    cout<<"Enter the value which you want to be searched: ";
    cin>>searchno;
    for(int i=0;i<5;i++){
        if(searchno==arrays4[i]){
            cout<<"Target found"<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Target not found!" << endl;
    }    
    return 0;
}
