#include <iostream>
#include <stdexcept>
using namespace std;

 // ===================== TASK 01(Calculator Template) ==========================
 
 // Calculator Template Class
template<class T>
class Calculator {
private:
    T num1,num2;

public:
    Calculator(T a, T b) {
        num1=a;
        num2=b;
    }

    T add(){
        return num1 + num2;
    }

    T subtract(){
        return num1 - num2;
    }

    T multiply(){
        return num1 * num2;
    }

    T divide(){
        if (num2 == 0){
            throw runtime_error("Error: Division by zero!"); // exception handling
        }
        return num1 / num2;
    }
};
int main(){
    try {
        double a,b;
        char op;

        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        cout<<"Enter operation (+, -, *, /): ";
        cin>>op;

        Calculator<double>calc(a,b);

        switch (op){
            case '+':
                cout<<"Result = "<<calc.add()<<endl;
                break;
            case '-':
                cout <<"Result = "<<calc.subtract()<<endl;
                break;
            case '*':
                cout<<"Result = "<<calc.multiply()<<endl;
                break;
            case '/':
                cout<<"Result = "<<calc.divide()<<endl;
                break;
            default:
                cout<<"Invalid operator!"<<endl;
        }
    }
    catch(exception &e){
        cout<<e.what()<<endl; // print exception message
    }

    return 0;
}


// ===================== TASK 02(Logger Template) ==========================

//Logger Template Class
template<class T>
class Logger{
	public:
		T error;
		 
		void show(){
		 	cout<<error<<endl;
		 }
};
int main(){
    Logger<int>log;
    log.error=404;
    log.show();

    Logger<string>log2;
    log2.error="Something happened";
    log2.show();

    return 0;
}
 














