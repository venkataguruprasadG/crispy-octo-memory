/*Problem Statement: Grade Calculator
Description:
Write a C++ program that calculates a student's grade based on their scores in three subjects: Mathematics, Science, and English. The program should prompt the user to input the scores for each subject and then calculate the average score. If the average score is 90 or above, the grade is 'A'. If it is between 80 and 89, the grade is 'B'. If it is between 70 and 79, the grade is 'C'. If it is between 60 and 69, the grade is 'D'. If it is below 60, the grade is 'F'.

Topics Required:
Variables and Data Types: Use float for scores and average.

Basic Input/Output: Use cin for input and cout for output.

Conditional Statements: Use if-else statements to determine the grade.

Syntax for the Required Topics:
Declaring Variables:

cpp
float mathScore, scienceScore, englishScore, averageScore;
Taking Input:

cpp
cin >> mathScore >> scienceScore >> englishScore;
If-Else Statements:

cpp
if (averageScore >= 90) {
    // Grade is 'A'
} else if (averageScore >= 80) {
    // Grade is 'B'
}
Problem Solution Outline:
Declare Variables: Store the scores for each subject and the average score.

Take Input: Prompt the user to input the scores for each subject.

Calculate Average: Calculate the average score by summing all scores and dividing by the number of subjects.

Determine Grade: Use if-else statements to determine the grade based on the average score.

Print Results: Display the average score and the corresponding grade.

Test Cases:
Test Case 1:

Input: Math = 95, Science = 92, English = 98

Expected Output: Average = 95.00, Grade = A

Test Case 2:

Input: Math = 80, Science = 85, English = 82

Expected Output: Average = 82.33, Grade = B

Test Case 3:

Input: Math = 70, Science = 75, English = 72

Expected Output: Average = 72.33, Grade = C

Test Case 4:

Input: Math = 60, Science = 65, English = 62

Expected Output: Average = 62.33, Grade = D

Test Case 5:

Input: Math = 40, Science = 45, English = 42

Expected Output: Average = 42.33, Grade = F

Explanation:
Input Handling: Use cin to read user input and store it in variables.

Average Calculation: Sum all scores and divide by the number of subjects.

Grade Determination: Use conditional statements to assign a grade based on the average score.*/

#include<iostream>
using namespace std;

int main(){
    float mathscore, sciencescore, englishscore, averagescore;

    cout << "Enter your math score: ";
    cin >> mathscore; 
    
    cout << "Enter your science score: ";
    cin>> sciencescore; 
    
    cout << "Enter your english score: ";
    cin >> englishscore;

    averagescore = (mathscore + sciencescore + englishscore) / 3.0;

    if(averagescore >= 90){
        cout << "Grade A" << endl;
    }
    else if(averagescore >= 80){
        cout<< "Grade B" << endl;
    }
    else if(averagescore >= 70){
        cout<< "Grade C" << endl;
    }
    else if(averagescore >= 60){
        cout<< "Grade D" << endl;
    }
    else{
        cout<< "Grade F" << endl;
    }
    return 0;
}