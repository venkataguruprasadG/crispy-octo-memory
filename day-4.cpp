/*Description:
Write a C++ program that prints "Hello, World!" to the console and then asks the user for their name. After the user inputs their name, the program should greet the user by name.

Topics Required:
Basic Input/Output: Use cout for output and cin for input.

Variables and Data Types: Use string to store the user's name.

Syntax for the Required Topics:
Printing Output:

cpp
std::cout << "Hello, World!" << std::endl;
Taking Input:

cpp
std::cin >> name;
Declaring Variables:

cpp
std::string name;
Problem Solution Outline:
Print "Hello, World!": Use cout to display the message.

Ask for User's Name: Prompt the user to input their name.

Take Input: Use cin to store the user's name in a variable.

Greet the User: Print a greeting message with the user's name.

Test Cases:
Test Case 1:

Input: User name = "John"

Expected Output: "Hello, World!" followed by "Hello, John!"

Test Case 2:

Input: User name = "Alice"

Expected Output: "Hello, World!" followed by "Hello, Alice!"

Test Case 3:

Input: User name = "Bob"

Expected Output: "Hello, World!" followed by "Hello, Bob!"

Explanation:
Basic Output: Use cout to print messages to the console.

Input Handling: Use cin to read user input and store it in a variable.*/
#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Hello World! followed by username "<<name<<endl;
}