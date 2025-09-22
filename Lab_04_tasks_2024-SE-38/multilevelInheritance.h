#include<iostream>
#include<string>
using namespace std;

// Base Class: Person
class Person {
public:
    string name;
    int age;

    void get_person() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void show_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class: Employee
class Employee : public Person {
public:
    string employee_id;

    void get_employee() {
        get_person();
        cout << "Enter Employee ID: ";
        cin >> employee_id;
    }

    void show_employee() {
        show_person();
        cout << "Employee ID: " << employee_id << endl;
    }
};

// Derived Class: Manager
class Manager : public Employee {
public:
    string department;

    void get_manager() {
        get_employee();
        cout << "Enter Department: ";
        cin >> department;
    }

    void show_manager() {
        show_employee();
        cout << "Department: " << department << endl;
    }
};

