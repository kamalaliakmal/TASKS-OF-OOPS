#include<iostream>
#include<string>
using namespace std;
// Calculator class
class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
        return a / b;
    }
};

// Student class (uses Calculator by reference = aggregation)
class Student {
private:
    string name;
    Calculator* calc; // Aggregation: pointer to shared calculator

public:
    Student(string n, Calculator* c) {
        name = n;
        calc = c;
    }

    void doCalculation() {
        double a, b, result = 0;
        char op;

        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        cout<<"Enter operation (+, -, *, /): ";
        cin>>op;

        switch(op){
        case '+':
            result=calc->add(a, b);
            break;
        case '-':
            result=calc->subtract(a, b);
            break;
        case '*':
            result=calc->multiply(a, b);
            break;
        case '/':
            result=calc->divide(a, b);
            break;
        default:
            cout<<"Invalid operation!"<<endl;
            return;
        }
        cout<<name<<" got result: "<<result<<endl;
    }
};

