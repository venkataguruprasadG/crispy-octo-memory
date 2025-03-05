/*
Problem Statement: Palindrome Checker
Description:
Write a C++ program that checks if a given string is a palindrome. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).

Topics Required:
Variables and Data Types: Use std::string for the input string.

Basic Input/Output: Use cin for input and cout for output.

String Manipulation: Use string functions to remove spaces and punctuation, and convert to lowercase.

Syntax for the Required Topics:
Declaring Variables:

cpp
std::string input;
Taking Input:

cpp
cin >> input;
String Manipulation:

Remove spaces and punctuation.

Convert to lowercase.

Palindrome Check:

Compare the string with its reverse.

Problem Solution Outline:
Declare Variables: Store the input string.

Take Input: Prompt the user to input a string.

Clean the String: Remove spaces and punctuation, and convert to lowercase.

Check if Palindrome: Compare the cleaned string with its reverse.

Print Results: Display whether the string is a palindrome or not.

Test Cases:
Test Case 1:

Input: "madam"

Expected Output: "The string is a palindrome."

Test Case 2:

Input: "hello"

Expected Output: "The string is not a palindrome."

Test Case 3:

Input: "A man, a plan, a canal: Panama"

Expected Output: "The string is a palindrome." (ignoring spaces, punctuation, and capitalization)

Test Case 4:

Input: Non-string input (e.g., "123")

Expected Output: Handle this case gracefully.

Explanation:
Input Handling: Use cin to read user input and store it in a variable.

String Cleaning: Use string manipulation functions to remove unwanted characters and convert to lowercase.

Palindrome Check: Compare the cleaned string with its reverse to determine if it's a palindrome.
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string input;
    cout<<"Enter the string: ";

    getline(cin, input);

    string cleaned;

    for(char c: input){
        if(isalnum(c)){
            cleaned+=tolower(c);
        }
    }

    string reversed = cleaned;
    std::reverse(reversed.begin(), reversed.end());

    if (cleaned == reversed) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    return 0;
}