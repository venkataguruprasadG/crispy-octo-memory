/*
Problem 4: Sorting an Array in Descending Order
Description:
Write a C++ program that sorts an array of integers in descending order using the Bubble Sort algorithm.

Task:

Initialize an array of integers with some values.

Implement the Bubble Sort algorithm to sort the array in descending order.

Print the sorted array.
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;

    int temp;

    vector<int> array(size);

    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]<array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    cout<<"Sorted the array in descending order: ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    cout<<endl;
    return 0;
}

/*
Here we have decided to use the vector because c++ doesnt support the variable length arrays. so we have to use
vector and dynamic memory allocation which could get the work done.
*/