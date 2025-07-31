//#include<iostream>
//#include<string>
//using namespace std;
//
//// Base Class: Employee
//class Employee{
//	public:
//		string name;
//		double salary;
//
//    void get_employee() {
//        cout << "Enter Name: ";
//        cin >> name;
//        cout << "Enter Salary: ";
//        cin >> salary;
//    }
//
//    void show_employee() {
//        cout << "Name: " << name << endl;
//        cout << "Salary: " << salary << endl;
//    }
//};
//
//// Derived Class: Developer
//class Developer : public Employee {
//public:
//    string language;
//
//    void get_developer() {
//        get_employee();
//        cout << "Enter Programming Language: ";
//        cin >> language;
//    }
//
//    void show_developer() {
//        show_employee();
//        cout << "Programming Language: " << language << endl;
//    }
//};
//
//// Derived Class: Designer
//class Designer : public Employee {
//public:
//    string tool;
//
//    void get_designer() {
//        get_employee();
//        cout << "Enter Design Tool: ";
//        cin >> tool;
//    }
//
//    void show_designer() {
//        show_employee();
//        cout << "Design Tool: " << tool << endl;
//    }
//};
