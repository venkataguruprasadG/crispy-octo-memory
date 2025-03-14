/*
Problem Statement: Student Information Management System
Description:
Write a C++ program that manages student information. The program should allow users to:

Add new students with details like name, roll number, and marks in different subjects.

Display all student records.

Search for a student by roll number.

Update a student's marks.

Delete a student's record.

Topics Required:
Structures or Classes: Use a struct or class to represent a student.

Arrays or Vectors: Store student records in an array or vector.

Functions: Implement separate functions for adding, displaying, searching, updating, and deleting student records.

Input/Output: Use cin for input and cout for output.

Syntax for the Required Topics:
Declaring a Student Structure:

cpp
struct Student {
    std::string name;
    int rollNumber;
    float marks[5]; // Assuming 5 subjects
};
Array of Students:

cpp
Student students[100]; // Array to store up to 100 students
Functions:

cpp
void addStudent(Student students[], int &count);
void displayStudents(Student students[], int count);
Problem Solution Outline:
Declare Student Structure: Define a struct or class to hold student details.

Create Array/Vector: Store student records in an array or vector.

Implement Functions: Write functions for adding, displaying, searching, updating, and deleting student records.

Main Function: Use a loop to continuously prompt the user for actions until they choose to exit.

Test Cases:
Test Case 1:

Input: Add two students, display all records.

Expected Output: Show both students' details.

Test Case 2:

Input: Search for a student by roll number.

Expected Output: Display the student's details if found.

Test Case 3:

Input: Update a student's marks.

Expected Output: Reflect the updated marks in the student's record.

Test Case 4:

Input: Delete a student's record.

Expected Output: Remove the student from the list.

Test Case 5:

Input: Invalid roll number for search/update/delete.

Expected Output: Handle invalid inputs gracefully.

Explanation:
Data Structure: Use a struct or class to organize student data.

Functions: Implement separate functions for each operation to keep the code organized.

Error Handling: Handle cases like invalid roll numbers or full array.
*/

#include<iostream>
#include<string>
using namespace std;

const int MAX_STUDENTS=100;

struct Student{
    std::string name;
    int rollNumber;
    float marks[5]; //assume 5 subjects
};

void addStudent(Student students[],int &count){
    if(count < MAX_STUDENTS) {
        std::cout<<"Enter student name: ";
        std::cin>>students[count].name;

        std::cout<<"Enter roll number: ";
        std::cin>>students[count].rollNumber;

        for(int i=0;i<5;i++){
            std::cout<<"Enter marks for subject "<<i+1<<": ";
            std::cin>>students[count].marks[i];
        }

        count++;
        std::cout<<"Student added successfully."<<std::endl;
    }else{
        std::cout<<"Maximum number of students reached."<<std::endl;
    }
}

void displayStudents(Student students[], int count){
    for(int i=0;i<count;i++){
        std::cout << "Name: " << students[i].name << std::endl;
        std::cout << "Roll Number: " << students[i].rollNumber << std::endl;
        for (int j = 0; j < 5; j++) {
            std::cout << "Marks in Subject " << j + 1 << ": " << students[i].marks[j] << std::endl;
        }
        std::cout << std::endl;
    }
}

int main(){
    Student students[MAX_STUDENTS];
    int count = 0;

    while(true){
        std::cout << "1. Add Student" << std::endl;
        std::cout << "2. Display Students" << std::endl;
        std::cout << "3. Exit" << std::endl;

        int choice;
        std::cin>>choice;

        switch (choice) {
            case 1:
            addStudent(students, count);
            break;
            case 2:
            displayStudents(students, count);
            break;
            case 3:
            return 0;
            default:
            cout<<"Invalid choice."<<endl;
        }
    }
    return 0;
}