/*
Problem Statement: Rock, Paper, Scissors Game
Description:
Write a C++ program that simulates a game of Rock, Paper, Scissors. The program should allow two players to play against each other or one player to play against the computer. The game should determine the winner based on the rules of Rock, Paper, Scissors:

Rock beats Scissors

Scissors beats Paper

Paper beats Rock

Topics Required:
Variables and Data Types: Use char or std::string for player choices.

Basic Input/Output: Use cin for input and cout for output.

Conditional Statements: Use if-else statements to determine the winner.

Syntax for the Required Topics:
Declaring Variables:

cpp
char player1Choice, player2Choice;
Taking Input:

cpp
cin >> player1Choice >> player2Choice;
If-Else Statements:

cpp
if (player1Choice == 'R' && player2Choice == 'S') {
    // Player 1 wins
} else if (player1Choice == 'S' && player2Choice == 'P') {
    // Player 1 wins
}
Problem Solution Outline:
Declare Variables: Store the choices of both players.

Take Input: Prompt players to input their choices (Rock, Paper, or Scissors).

Determine Winner: Use if-else statements to compare choices and determine the winner.

Print Results: Display the winner or a tie.

Test Cases:
Test Case 1:

Input: Player 1 chooses Rock, Player 2 chooses Scissors

Expected Output: Player 1 wins

Test Case 2:

Input: Player 1 chooses Scissors, Player 2 chooses Paper

Expected Output: Player 1 wins

Test Case 3:

Input: Player 1 chooses Paper, Player 2 chooses Rock

Expected Output: Player 1 wins

Test Case 4:

Input: Both players choose the same option

Expected Output: It's a tie

Test Case 5:

Input: Non-valid input (e.g., "X")

Expected Output: Handle invalid input gracefully.

Explanation:
Input Handling: Use cin to read user input and store it in variables.

Winner Determination: Use conditional statements to compare player choices and determine the winner based on the game's rules.

Error Handling: Implement checks for invalid inputs like non-valid choices.
*/

#include<iostream>
using namespace std;

int main(){
    char player1choice, player2choice;
    
    while(true){
        cout<<"Enter Player 1's choice (R for Rock, P for Paper, S for Scissors): ";
        cin>>player1choice;
        if(player1choice=='R'||player1choice=='P'||player1choice=='S'){
            break;
        }else{
            cout<<"Entered Invalid Input! please enter R, P, S"<<endl;
        }
    }

    while(true){
        cout<<"Enter Player 2's choice (R for Rock, P for Paper, S for Scissors): ";
        cin>>player2choice;
        if(player2choice=='R'||player2choice=='P'||player2choice=='S'){
            break;
        }else{
            cout<<"Entered Invalid Input! please enter R, P, S"<<endl;
        }
    }

    if(player1choice=='R'&&player2choice=='S'){
        cout<<"Player 1 wins"<<endl;
    }else if(player1choice=='S'&&player2choice=='P'){
        cout<<"Player 1 wins"<<endl;
    }else if(player1choice=='P'&&player2choice=='R'){
        cout<<"Player 1 wins"<<endl;
    }else if(player1choice==player2choice){
        cout<<"It's a tie"<<endl;
    }else{
        cout<<"Player 2 wins"<<endl;
    }
    return 0;
}