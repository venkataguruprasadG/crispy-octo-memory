/*
Problem 2: Checking if Two Arrays are Identical
Description:
Write a C++ program that checks if two arrays are identical.

Task:

Initialize two arrays of integers with some values.

Use a loop to compare each element of the first array with the corresponding element of the second array.

If all elements match, print "Arrays are identical." Otherwise, print "Arrays are not identical.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    bool identical=true;

    int a[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int a2[5]={1,2,3,4,5};

    for(int i=0;i<n;i++){
        if(a[i]!=a2[i]){
            identical=false;
            break;
        }
    }

    if (identical) {
        cout << "Arrays are identical." << endl;
    } else {
        cout << "Arrays are not identical." << endl;
    }

    return 0;
}