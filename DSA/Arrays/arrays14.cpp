/*
Problem 3: Finding the Index of a Given Element in an Array
Description:
Write a C++ program that finds the index of a given element in an array.

Task:

Initialize an array of integers with some values.

Ask the user to input a number to search for.

Use a loop to iterate over the array and find the index of the given number.

If the number is found, print its index. Otherwise, print "Number not found."
*/

#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int target;
    cout<<"Enter target value";
    cin>>target;

    bool flag=false;

    for(int i=0;i<5;i++){
        if(a[i]==target){
            cout<<"Target found at index"<<i<<endl;
            flag=true;
            break;
        }
    }

    if(!flag)
    cout<<"Target not found"<<endl;

    return 0;
}