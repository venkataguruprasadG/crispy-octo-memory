/*
Problem Statement: To-Do List App
Description:
Write a C++ program that simulates a simple to-do list app. The program should allow users to:

Add new tasks with descriptions.

Display all tasks.

Mark tasks as completed.

Delete tasks.

Topics Required:
Structures or Classes: Use a struct or class to represent a task.

Arrays or Vectors: Store task records in an array or vector.

Functions: Implement separate functions for adding, displaying, marking completed, and deleting tasks.

Input/Output: Use cin for input and cout for output.

Syntax for the Required Topics:
Declaring a Task Structure:

cpp
struct Task {
    std::string description;
    bool completed;
};
Array of Tasks:

cpp
Task tasks[100]; // Array to store up to 100 tasks
Functions:

cpp
void addTask(Task tasks[], int &count);
void displayTasks(Task tasks[], int count);
Problem Solution Outline:
Declare Task Structure: Define a struct or class to hold task details.

Create Array/Vector: Store task records in an array or vector.

Implement Functions: Write functions for adding, displaying, marking completed, and deleting tasks.

Main Function: Use a loop to continuously prompt the user for actions until they choose to exit.

Test Cases:
Test Case 1:

Input: Add two tasks, display all tasks.

Expected Output: Show both tasks' details.

Test Case 2:

Input: Mark a task as completed.

Expected Output: Reflect the task as completed.

Test Case 3:

Input: Delete a task.

Expected Output: Remove the task from the list.

Test Case 4:

Input: Invalid task index for mark/delete.

Expected Output: Handle invalid inputs gracefully.

Explanation:
Data Structure: Use a struct or class to organize task data.

Functions: Implement separate functions for each operation to keep the code organized.

Error Handling: Handle cases like invalid task indices or full array.
*/

#include<iostream>
#include<string>
using namespace std;

const int max_tasks=100;

struct Task{
    string description;
    bool completed;
};

void addTask(Task tasks[],int &count)
{
    if(count<max_tasks)
    {
        cout<<"Enter Task Description: ";
        getline(cin,tasks[count].description);

        tasks[count].completed=false;
        count++;
        cout<<"Task added Successfully."<<endl;
    }else{
        cout<<"Maximum tasks reached ";
    }
}

void displayTask(Task tasks[],int count)
{
    if(count==0)
    {
        cout<<"No tasks are there to display: "<<endl;
        return;
    }

    for(int i=0;i<count;i++)
    {
        cout<<i+1<<"."<<tasks[i].description<<endl;
        cout<<"Status: "<<(tasks[i].completed ? "completed":"pending")<<endl;
        cout<<"---------------"<<endl;
    }
}

void markCompleted(Task tasks[],int count)
{
    int taskIndex;
    cout<<"Enter index number of your task to mark it as completed: ";
    cin>>taskIndex;

    if(taskIndex > 0 && taskIndex<count)
    {
        tasks[taskIndex-1].completed=true;
        cout<<"Task is marked as completed: "<<endl;
    }else
    {
        cout<<"invalid task index"<<endl;
    }
}


void deleteTask(Task tasks[],int &count)
{
    int taskIndex;
    cout<<"enter index number which you want to delete: ";
    cin>>taskIndex;

    int j;

    if(taskIndex>0 && taskIndex<=count){
        for(int i=j-1;i<count-1;i++)
        {
            tasks[i]=tasks[i+1];
        }
        count--;
        cout<<"Task is deleted."<<endl;
    }else{
        cout<<"Invalid task Index is given."<<endl;
    }
}

int main(){
    Task tasks[max_tasks];
    int count=0;
    int choice;

    while (true)
    {
        /* code */
    std::cout<<"\n1.Add Task \n 2.Delete Task \n3.Display Tasks\n4.Mark Task as Completed\n5.exit ";
    cout<<"\nEnter your choice: ";
    cin>>choice;


    switch (choice)
    {
    case 1:
        /* code */
        addTask(tasks,count);
        break;
    case 2:
        deleteTask(tasks,count);
        break;
    case 3:
        displayTask(tasks,count);
        break;
    case 4:
        markCompleted(tasks,count);
        break;
    case 5:
        cout<<"Exiting the program"<<endl;
        return 0;
    default:
        cout<<"Invlid choice.Please enter the correct choice."<<endl;
    }
    }
    return 0;
}