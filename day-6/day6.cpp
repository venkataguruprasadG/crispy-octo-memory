/*Problem Statement: Vowel Checker
Description:
Write a C++ program that checks if a given character is a vowel or not. The program should prompt the user to input a character and then display whether it is a vowel or a consonant.

Topics Required:
Variables and Data Types: Use char for the input character.

Basic Input/Output: Use cin for input and cout for output.

Conditional Statements: Use if-else statements to check if the character is a vowel.

Syntax for the Required Topics:
Declaring Variables:

cpp
char inputChar;
Taking Input:

cpp
cin >> inputChar;
If-Else Statements:

cpp
if (inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' || inputChar == 'u') {
    // Character is a vowel
} else {
    // Character is not a vowel
}
Problem Solution Outline:
Declare Variables: Store the input character.

Take Input: Prompt the user to input a character.

Check if Vowel: Use if-else statements to determine if the character is a vowel.

Print Results: Display whether the character is a vowel or a consonant.

Test Cases:
Test Case 1:

Input: Character = 'a'

Expected Output: "The character is a vowel."

Test Case 2:

Input: Character = 'b'

Expected Output: "The character is a consonant."

Test Case 3:

Input: Character = 'E' (uppercase vowel)

Expected Output: Handle uppercase vowels correctly.

Test Case 4:

Input: Character = '1' (non-alphabet character)

Expected Output: Handle non-alphabet characters gracefully.

Explanation:
Input Handling: Use cin to read user input and store it in a variable.

Vowel Checking: Use conditional statements to check if the character is a vowel.

Case Sensitivity: Consider handling both lowercase and uppercase vowels.*/

#include<iostream>

int main(){
    char inputChar;
    std::cin>>inputChar;

    if (inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' || inputChar == 'u' ||
        inputChar == 'A' || inputChar == 'E' || inputChar == 'I' || inputChar == 'O' || inputChar == 'U') {
        std::cout << "The character is a vowel." << std::endl;
    } else if ((inputChar >= 'a' && inputChar <= 'z') || (inputChar >= 'A' && inputChar <= 'Z')) {
        std::cout << "The character is a consonant." << std::endl;
    } else {
        std::cout << "The character is not a letter." << std::endl;
    }
    return 0;
}

/*
Alternative Approach:
Instead of manually checking ranges, you can use the standard library function isalpha() from <cctype>:

cpp
#include <cctype>

if (isalpha(inputChar)) {
    // inputChar is an alphabetic character (either lowercase or uppercase)
}
*/
