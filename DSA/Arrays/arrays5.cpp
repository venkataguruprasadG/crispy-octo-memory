/*
Problem Statement: Reversing an Array
Description:
Write a C++ program that reverses the elements of a given array.

Task:

Initialize an array of integers with some values.

Use a loop to reverse the order of the elements in the array.

Print the original and reversed arrays.

Topics Required:
Array Declaration and Initialization: Declare and initialize an array with specific values.

Looping: Use a loop to iterate over the array elements.

Swapping Elements: Use a temporary variable to swap elements from the beginning and end of the array.

Syntax for the Required Topics:
Array Declaration and Initialization:

cpp
int myArray[5] = {1, 2, 3, 4, 5};
Looping Over Array Elements:

cpp
for (int i = 0; i < 5; i++) {
    // Perform operations on myArray[i]
}
Swapping Elements:

cpp
int temp = myArray[i];
myArray[i] = myArray[4 - i];
myArray[4 - i] = temp;
Printing Arrays:

cpp
cout << "Original array: ";
for (int i = 0; i < 5; i++) {
    cout << myArray[i] << " ";
}
cout << endl;

// After reversing
cout << "Reversed array: ";
for (int i = 0; i < 5; i++) {
    cout << myArray[i] << " ";
}
cout << endl;
Problem Solution Outline:
Declare and Initialize the Array: Create an array with initial values.

Print the Original Array: Display the original array.

Reverse the Array: Use a loop to swap elements from the beginning and end of the array.

Print the Reversed Array: Display the reversed array.

Test Cases:
Test Case 1:

Input: Array = {1, 2, 3, 4, 5}

Expected Output:

Original array: 1 2 3 4 5

Reversed array: 5 4 3 2 1

Test Case 2:

Input: Array = {10, 20, 30, 40, 50}

Expected Output:

Original array: 10 20 30 40 50

Reversed array: 50 40 30 20 10

Test Case 3:

Input: Array = {1, 3, 5, 7, 9}

Expected Output:

Original array: 1 3 5 7 9

Reversed array: 9 7 5 3 1

Explanation:
Initialization: Use the syntax int myArray = {1, 2, 3, 4, 5}; to initialize the array.

Reversing: Use a loop to swap elements from the start and end of the array, moving towards the center.
*/

#include<iostream>
using namespace std;

int main(){
    int array5[5]={1,2,3,4,5};

    cout<<"Printing the original array ";
    for(int i=0;i<5;i++){
        cout<<array5[i]<<" ";
    }
    cout<<endl;

    int left=0;
    int right=4;

    while(left<right){
        int temp=array5[left];
        array5[left]=array5[right];
        array5[right]=temp;

        left++;
        right--;
    }

    cout<<"Printing the reversed array ";
    for(int i=0;i<5;i++){
        cout<<array5[i]<<" ";
    }
    cout<<endl;
    return 0;
}