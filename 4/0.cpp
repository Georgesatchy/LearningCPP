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

Employee newEmployee(string name, int employeeNumber, int salary) {
    Employee thisEmployee;
    thisEmployee.name = name;
    thisEmployee.employeeNumber = employeeNumber;
    thisEmployee.salary = salary;
    return thisEmployee;
}

int main() {
    Employee employees[] = {newEmployee("george", 0, 9832974)};
    Date DOB;
    DOB.day = 2;
    DOB.month = 8;
    DOB.year = 2005;
    cout << DOB << endl;
    cout << search("george", employees);
}