/*
Problem Statement: Phonebook Management System
Description:
Write a C++ program that simulates a simple phonebook management system. The program should allow users to:

Add new contacts with names and phone numbers.

Display all contacts.

Search for a contact by name.

Update a contact's phone number.

Delete a contact.

Topics Required:
Structures or Classes: Use a struct or class to represent a contact.

Arrays or Vectors: Store contact records in an array or vector.

Functions: Implement separate functions for adding, displaying, searching, updating, and deleting contacts.

Input/Output: Use cin for input and cout for output.

Syntax for the Required Topics:
Declaring a Contact Structure:

cpp
struct Contact {
    std::string name;
    std::string phoneNumber;
};
Array of Contacts:

cpp
Contact contacts[100]; // Array to store up to 100 contacts
Functions:

cpp
void addContact(Contact contacts[], int &count);
void displayContacts(Contact contacts[], int count);
Problem Solution Outline:
Declare Contact Structure: Define a struct or class to hold contact details.

Create Array/Vector: Store contact records in an array or vector.

Implement Functions: Write functions for adding, displaying, searching, updating, and deleting contacts.

Main Function: Use a loop to continuously prompt the user for actions until they choose to exit.

Test Cases:
Test Case 1:

Input: Add two contacts, display all contacts.

Expected Output: Show both contacts' details.

Test Case 2:

Input: Search for a contact by name.

Expected Output: Display the contact's details if found.

Test Case 3:

Input: Update a contact's phone number.

Expected Output: Reflect the updated phone number in the contact's record.

Test Case 4:

Input: Delete a contact.

Expected Output: Remove the contact from the list.

Test Case 5:

Input: Invalid name for search/update/delete.

Expected Output: Handle invalid inputs gracefully.

Explanation:
Data Structure: Use a struct or class to organize contact data.

Functions: Implement separate functions for each operation to keep the code organized.

Error Handling: Handle cases like invalid names or full array.
*/

#include<iostream>
#include<string>
using namespace std;

const int max_contacts=100;

struct Contact{
    string name;
    long int phonenumber;
};

void addContact(Contact contacts[], int &count){
    if(count<max_contacts){
        cout<<"Enter contact name: ";
        cin>>contacts[count].name;

        cout<<"Enter your phone number: ";
        cin>>contacts[count].phonenumber;

        count++;
        cout<<"Contact added successfully.!!"<<endl;
    }else{
        cout<<"Maximum contacts reached..!"<<endl;
    }
}

void displayContact(Contact contacts[], int count){
    if(count==0){
        cout<<"No contacts are present to display"<<endl;
        return;
    }

    for(int i=0;i<count;i++){
        cout<<"Name: "<<contacts[count].name<<endl;
        cout<<"PhoneNumber: "<<contacts[count].phonenumber<<endl;
        cout<<"----------------"<<endl;
    }
}

void searchContact(Contact contacts[], int count){
    string targetName;
    cout<<"Enter name to search"<<endl;
    cin>>targetName;

    for(int i=0;i<count;count++){
        if(contacts[i].name==targetName){
            cout<<"contact found!"<<endl;
            cout<<"contact name: "<<contacts[i].name<<endl;
            cout<<"contact phonenumber: "<<contacts[i].phonenumber<<endl;
            return;
        }
    }
        cout<<"No contact found...!"<<endl;
}

void deleteContact(Contact contacts[], int &count){
    string targetName;
    cout<<"Enter name to delete: ";
    cin>>targetName;

    for(int i=0;i<count;i++){
        if(contacts[i].name==targetName){
            for(int j=i;j<count-1;j++){
                contacts[j]=contacts[j+1];
            }
            count--;
            cout<<"Contact deleted."<<endl;
            return;
        }
    }
    cout<<"Contact not found!"<<endl;
}

void updateContact(Contact contacts[],int count){
    string targetName;
    cout<<"Enter name to update: "<<endl;
    cin>>targetName;

    for(int i=0;i<count;i++){
        if(contacts[i].name==targetName){
            cout<<"enter new phone number: ";
            cin>>contacts[i].phonenumber;
            cout<<"Contact updated successfully."<<endl;
            cout<<"enter new contact name: ";
            cin>>contacts[i].name;
            cout<<"Contact name Updated Successfully."<<endl;
            return;
        }
    }
    cout<<"Contact not found!"<<endl;
}
int main(){
    Contact contacts[max_contacts];
    int count=0;

    while(true){
        cout << "\n1. Add Contact\n2. Display Contacts\n3. Search Contact\n4. Update Contact\n5. Delete Contact\n6. Exit\n";
        int choice;
        cout<<"Enter you choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            addContact(contacts, count);
            break;
            case 2:
            displayContact(contacts, count);
            break;
            case 3:
            searchContact(contacts, count);
            break;
            case 4:
            updateContact(contacts, count);
            break;
            case 5:
            deleteContact(contacts, count);
            break;
            case 6:
            cout<<"exiting program."<<endl;
        }
    }
    return 0;
}