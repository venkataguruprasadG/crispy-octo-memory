/*
Problem Statement: Bank Account Management
Description:
Write a C++ program that simulates a simple bank account management system. The program should allow users to:

Deposit money into their account.

Withdraw money from their account.

Check their account balance.

Topics Required:
Variables and Data Types: Use float for the account balance and transaction amounts.

Basic Input/Output: Use cin for input and cout for output.

Conditional Statements: Use if-else statements to handle different user choices.

Syntax for the Required Topics:
Declaring Variables:

cpp
float balance = 0.0;
Taking Input:

cpp
cin >> choice;
If-Else Statements:

cpp
if (choice == 'D') {
    // Deposit money
} else if (choice == 'W') {
    // Withdraw money
} else if (choice == 'C') {
    // Check balance
}
Problem Solution Outline:
Declare Variables: Store the account balance.

Take Input: Prompt the user to choose an action (deposit, withdraw, check balance).

Perform Action: Use if-else statements to handle the user's choice.

Print Results: Display the updated balance after each action.

Test Cases:
Test Case 1:

Input: Deposit $100, Withdraw $50, Check Balance

Expected Output: Balance = $50

Test Case 2:

Input: Withdraw $100 (when balance is $50)

Expected Output: Handle insufficient funds gracefully.

Test Case 3:

Input: Non-numeric input for transaction amount

Expected Output: Handle invalid input gracefully.

Test Case 4:

Input: Invalid choice (e.g., 'X')

Expected Output: Handle invalid choice gracefully.

Explanation:
Input Handling: Use cin to read user input and store it in variables.

Transaction Handling: Use conditional statements to perform different transactions.

Error Handling: Implement checks for invalid inputs like non-numeric values or insufficient funds.
*/

#include<iostream>
using namespace std;

int main(){
    float balance = 0.0;
    char choice;

    while (true) {
        cout << "Enter your choice: (withdraw:'w', deposit:'d', check_balance:'c', quit:'q')";
        cin >> choice;

        if (choice == 'd') {
            float amount;
            cout << "Enter money to deposit: ";
            cin >> amount;

            // Check for invalid input (non-numeric)
            if (!(cin)) {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear(); // Clear error flag
                cin.ignore(10000, '\n'); // Ignore remaining input
                continue;
            }

            balance += amount;
            cout << "Deposit Successful. New Balance: " << balance << endl;
        } else if (choice == 'w') {
            float amount;
            cout << "Enter money to withdraw: " << endl;
            cin >> amount;

            // Check for invalid input (non-numeric)
            if (!(cin)) {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear(); // Clear error flag
                cin.ignore(10000, '\n'); // Ignore remaining input
                continue;
            }

            if (amount > balance) {
                cout << "Insufficient funds." << endl;
            } else {
                balance -= amount;
                cout << "Withdraw Successful. New balance: " << balance << endl;
            }
        } else if (choice == 'c') {
            cout << "Current Balance: " << balance << endl;
        } else if (choice == 'q') {
            cout << "Exiting the program." << endl;
            break; // Exit loop when user chooses to quit
        } else {
            cout << "Invalid choice. Please enter w, c, q, or d." << endl;
        }
    }

    return 0;
}
