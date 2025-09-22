#include<iostream>
#include<string>
#include"composition.h"
#include"aggregation.h"
using namespace std;

 //============================== TASK 01(COMPOSITION) ==========================                             
 
int main() {
    Calculator cal;
    char choice;

    cout << "Enter the first number: ";
    cin >> cal.num1;
    cout << "Enter the second number: ";
    cin >> cal.num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> choice;

    switch (choice) {
    case '+':
        cal.add();
        break;
    case '-':
        cal.subtract();
        break;
    case '*':
        cal.multiply();
        break;
    case '/':
        cal.divide();
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    cal.showLast(); // show last result using Display class

    return 0;
}
 
 //============================== TASK 02(AGGREGATION) ==========================

int main() {
    Calculator sharedCalc; // One calculator shared by all students

    int numStudents;
    cout<<"Enter number of students: ";
    cin>>numStudents;

    for (int i=1;i<=numStudents; i++) {
        string sname;
        cout<<"\nEnter name of student " << i << ": ";
        cin>>sname;

        Student s(sname, &sharedCalc); // Each student shares same calculator
        s.doCalculation();
    }

    return 0;
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
