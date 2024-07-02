#ifndef SVONSYDOW_WEEK3_MANAGER_H
#define SVONSYDOW_WEEK3_MANAGER_H
#include "Employee.h"
using namespace std;

class Manager : public Employee{
public:
    using Employee::Employee;
    Manager();
    Manager(string EmpFirstName, string EmpLastName, int EmpRating, string EmpNotes, int EmpSalary, string MgrTitle, string Department);


    void setMgrTitle(string MgrTitle);
    string getMgrTitle();
    void setDepartment(string Department);
    string getDepartment();
    void printValues();

private:
    string title;
    string department;

};


#endif //SVONSYDOW_WEEK3_MANAGER_H
