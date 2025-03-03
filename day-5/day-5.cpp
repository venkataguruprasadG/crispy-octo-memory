/*Problem Statement: Guessing Game
Description:
Write a C++ program that plays a simple guessing game with the user. The program should think of a number between 1 and 100, and the user has to guess it. After each guess, the program should tell the user if their guess is higher or lower than the number it's thinking of.

Topics Required:
Variables and Data Types: Use int for the number to guess and user's guesses.

Control Structures: Use a while loop to repeatedly ask for guesses until the correct number is guessed.

Conditional Statements: Use if-else statements to provide feedback on the user's guesses.

Syntax for the Required Topics:
Declaring Variables:

cpp
int numberToGuess, userGuess;
While Loop:

cpp
while (condition) {
    // Loop body
}
If-Else Statements:

cpp
if (userGuess < numberToGuess) {
    // Feedback for too low
} else if (userGuess > numberToGuess) {
    // Feedback for too high
} else {
    // Correct guess
}
Problem Solution Outline:
Generate a Number: Use a random number generator or a fixed number for simplicity.

Take User Guesses: Use a loop to repeatedly ask the user for guesses.

Provide Feedback: Use if-else statements to tell the user if their guess is too high or too low.

End Game: Exit the loop when the user guesses the correct number.

Test Cases:
Test Case 1:

Input: User guesses the number correctly on the first try.

Expected Output: Congratulations message.

Test Case 2:

Input: User guesses a number that is too high.

Expected Output: Feedback indicating the guess is too high.

Test Case 3:

Input: User guesses a number that is too low.

Expected Output: Feedback indicating the guess is too low.

Test Case 4:

Input: User guesses the number incorrectly multiple times before guessing correctly.

Expected Output: Feedback after each guess, followed by a congratulations message when correct.

Explanation:
Random Number Generation: You can use rand() or a fixed number for simplicity.

Loop Control: Use a while loop to keep asking for guesses until the correct number is guessed.

Conditional Feedback: Provide feedback based on whether the guess is higher or lower than the number to guess.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    int numberToGuess, userGuess;

    // Seed the random number generator
    srand(time(0));
    numberToGuess = rand() % 100 + 1; // Generate a random number between 1 and 100

    cout << "Welcome to the Guessing Game!\n";
    cout << "I have chosen a number between 1 and 100. Try to guess it!\n";

    // DEBUG: Print the secret number (remove this in final version)
    cout << "(DEBUG) The secret number is: " << numberToGuess << endl; 

    while (true) {
        cout << "Enter your guess (1-100): ";

        // Validate user input
        if (!(cin >> userGuess)) {
            cout << "Invalid input. Please enter a valid integer between 1 and 100.\n";
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue;
        }

        // Check if the guess is within the valid range
        if (userGuess < 1 || userGuess > 100) {
            cout << "Out of range! Please enter a number between 1 and 100.\n";
            continue;
        }

        // Provide feedback
        if (userGuess < numberToGuess) {
            cout << "Too low! Try again.\n";
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number: " << numberToGuess << "\n";
            break; // Exit loop when guessed correctly
        }
    }
    return 0;
}
