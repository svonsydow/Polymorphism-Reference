#include<iostream>
#include <utility>
#include "Employee.h"

using namespace std;

Employee::Employee() = default;

Employee::Employee(string EmpFirstName, string EmpLastName,
                   int EmpRating, string EmpNotes, int EmpSalary) {
    firstName = std::move(EmpFirstName);
    lastName = std::move(EmpLastName);
    rating = EmpRating;
    notes = std::move(EmpNotes);
    salary = EmpSalary;

}
/*Destructor. cout used to show that destructor is called after
program has finished.*/
Employee::~Employee() {
        cout << "destructor called" << endl;
}


//Setter and getter for Employee first name.
void Employee::setFirstName(string EmpFirstName) {
     firstName = std::move(EmpFirstName);
};

string Employee::getFirstName() {
    cout << firstName;
    return firstName;
}

//Setter and getter for Employee last name.

void Employee::setLastName(string EmpLastName) {
    lastName = std::move(EmpLastName);
}

string Employee::getLastName() {
    return lastName;
}

//Setter and getter for Employee rating.
void Employee::setRating(int EmpRating) {
    rating = EmpRating;
}
int Employee::getRating() const {
        return rating;
}

//Setter and getter for Employee notes.
void Employee::setNotes(string EmpNotes) {
    notes = std::move(EmpNotes);
}

string Employee::getNotes() {
    return notes;
}

//Setter and getter for Employee salary.
void Employee::setSalary(int EmpSalary) {
salary = EmpSalary;
}

int Employee::getSalary() {
    return salary;
}

//Functions
//Prints Employee information.
void Employee::printValues() {
    cout << "Name: " << lastName << ", " << firstName << endl
         << "Salary: $" << salary << endl
         << "Rating: " << rating << endl
         << "Notes: "<< notes;
}
//Function to input Employee information.
void Employee::getEmpInfo() {
    cout << "Enter Name: " << endl;
    cin >> firstName >> lastName;
    cout << "Enter Salary: " << endl;
    cin >> salary;
    cout << "Enter Efficiency Rating: " << endl;
    cin >> rating;
    cout << "Enter Notes: " << endl;
    cin >> notes;
    cout << endl;
}














