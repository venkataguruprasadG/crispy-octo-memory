/*
Problem 1: Finding the Maximum Element in an Array
Description:
Write a C++ program that finds the maximum element in an array of integers.

Task:

Initialize an array of integers with some values.

Use a loop to iterate over the array and find the maximum element.

Print the maximum element.
*/

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum element: "<<max<<endl;
    return 0;
}