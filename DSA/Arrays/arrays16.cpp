/*
Problem 5: Finding the Sum of All Odd Numbers in an Array
Description:
Write a C++ program that calculates the sum of all odd numbers in an array.

Task:

Initialize an array of integers with some values.

Use a loop to iterate over the array and check if each element is odd.

If an element is odd, add it to a running total.

Print the sum of all odd numbers.
*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size;
    cout<<"enter size of the array: ";
    cin>>size;

    int sum=0;

    vector<int> array(size);

    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>array[i];
    }
    
    for(int i=0;i<size;i++)
    {
        if(array[i]%2!=0)
        {
            sum+=array[i];
        }
    }

    cout<<"Sum of all odd number in the array: "<<sum<<endl;
    return 0;
}