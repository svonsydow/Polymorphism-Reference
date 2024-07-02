#ifndef SVONSYDOW_WEEK3_EMPLOYEE_H
#define SVONSYDOW_WEEK3_EMPLOYEE_H
#include <iostream>
using namespace std;


class Employee {
public:
    //Constructors
    Employee();
    Employee(string EmpFirstName, string EmpLastName, int EmpRating, string EmpNotes, int EmpSalary);

    //Destructor
    virtual ~Employee();

    //Setters and getters
    virtual void setFirstName(string EmpFirstName);
    virtual string getFirstName();
    virtual void setLastName(string EmpLastName);
    virtual string getLastName();
    void setRating(int EmpRating);
    int getRating() const;
    void setNotes(string EmpNotes);
    string getNotes();
    virtual void setSalary(int EmpSalary);
    virtual int getSalary();

    //Functions
    virtual void printValues();
    void getEmpInfo();

    friend class Manager;

private:

    string firstName;
    string lastName;
    int rating{};
    string notes;
    int salary{};


};

#endif //SVONSYDOW_WEEK3_EMPLOYEE_H
