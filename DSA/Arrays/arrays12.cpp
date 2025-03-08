/*
Problem 1: Finding the Average of an Array
Description:
Write a C++ program that calculates the average of all elements in an array.

Task:

Initialize an array of integers with some values.

Use a loop to sum all elements in the array.

Calculate the average by dividing the sum by the number of elements.

Print the average.
*/

#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int avg=0;
    int sum=0;

    for(int i=0;i<5;i++){
        sum+=a[i];
    }
    avg=sum/5;
    cout<<avg;
}