#include <iostream>
#include <random>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

ostream& operator << (ostream& output, const Date& dt) {
    output << dt.day << "/" << dt.month << "/" << dt.year;
    return output;
}

struct Employee {
    int employeeNumber;
    string name;
    Date dob;
    double salary;
    string department;
};

ostream& operator << (ostream& output, const Employee& em) {
    output << em.name << " (" << em.employeeNumber << "), $" << em.salary;
    return output;
}

Employee search(string name, Employee* employees) {
    int employeeCount = sizeof(*employees)/sizeof(employees[0]);
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].name == name) {
            return employees[i];
        }
    }
    return (Employee &&) "null";
}

Employee newEmployee(int employeeNumber, string name, Date dob, double salary, string department) {
    Employee thisEmployee;
    thisEmployee.employeeNumber = employeeNumber;
    thisEmployee.name = name;
    thisEmployee.dob = dob;
    thisEmployee.salary = salary;
    thisEmployee.department = department;
    return thisEmployee;
}

int main() {
    Employee employees[] = {};
    while (1) {
        int choice;
        string name;
        Employee thisEmployee;
        int employeeNumber;
        Date DOB;
        double salary;
        string department;
        cout << "Choose a function:" << endl << "1. Search for an employee by name" << endl
        << "2. Add a new employee" << endl
        << "3. Remove an employee " << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter employee name:" << endl;
                cin >> name;
                thisEmployee = search(name, employees);
                break;
            case 2:
                cout << "Enter employee name:" << endl;
                cin >> name;
                cout << "Enter employee DOB (DD MM YYYY):" << endl;
                cin >> DOB.day >> DOB.month >> DOB.year;
                cout << "Enter employee salary:" << endl;
                cin >> salary;
                cout << "Enter employee department:" << endl;
                cin >> department;
                employees[sizeof(*employees)/sizeof(employees[0])] = newEmployee(
                        sizeof(*employees)/sizeof(employees[0]),
                        name, DOB, salary, department);
                break;
            case 3:
                cout << "WORK IN PROGRESS" << endl
                break;
            default:
                cout << "Invalid Choice!" << endl;
                break;
        }
    }
}