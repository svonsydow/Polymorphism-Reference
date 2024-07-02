

#include <iostream>
#include <memory>
#include <list>
#include "Employee.h"
#include "Manager.h"
using namespace std;
int main() {

//STL example: Containers, using an array.
//code to input Employee data to an array. Once the number of elements has been reached,
//code will then print all Employee data within array.
    Employee Emp[3];
    for (int i=0; i < size(Emp); i++){
        cout << (i+1) << endl;
        Emp[i].getEmpInfo();
        }
    for (int i=0; i < size(Emp); i++){
        cout <<(i+1) << endl;
        Emp[i].printValues();
        cout << endl;
    }

//Added to provide some separation in the readout upon running the program.
    cout << endl;
    cout << endl;

//Object for Employee class using a smart pointer.
auto John = make_unique<Employee>("John", "Smith", 5, "Notes", 75000);
John->printValues();


//Added to provide some separation in the readout upon running the program.
    cout << endl;
    cout << endl;


//Object for Manager class using a smart pointer and constructor overloading.
auto Jane = make_unique<Manager>("Jane", "Doe", 4, "Notes", 150000, "Senior Manager", "Sales");
    Jane->printValues();

    cout << endl;
}