#include <iostream>
#include <utility>
#include "Manager.h"
using namespace std;

Manager::Manager()= default;

Manager::Manager(string EmpFirstName, string EmpLastName, int EmpRating, string EmpNotes, int EmpSalary, string MgrTitle, string Department){
    firstName = std::move(EmpFirstName);
    lastName = std::move(EmpLastName);
    rating = EmpRating;
    notes = std::move(EmpNotes);
    salary = EmpSalary;
    title = std::move(MgrTitle);
    department = std::move(Department);

}

//Setter and getter for title.
void Manager::setMgrTitle(string MgrTitle) {
title = std::move(MgrTitle);
}

string Manager::getMgrTitle() {
    return title;
}

//Setter and getter for department.
void Manager::setDepartment(string Department) {
department = std::move(Department);
}

string Manager::getDepartment() {
    return department;
}

//Functions
//Prints Manager information.
void Manager::printValues() {
    cout << "Name: " << lastName << ", " << firstName << endl
         << "Salary: $" << salary << endl
         << "Rating: " << rating << endl
         << "Notes: "<< notes << endl
         << "Title: " << title << endl
         << "Department: " << department << endl;
}
