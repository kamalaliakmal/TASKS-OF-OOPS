#include<iostream>
#include<string>
using namespace std;
// Display class
class Display {
public:
    void showResult(double result) {
        cout << "The result is = " << result << endl;
    }

    void showLastResult(double lastResult) {
        cout << "The last result was = " << lastResult << endl;
    }
};

// Calculator class (has Display as a member = composition)
class Calculator {
private:
    Display display;   // Composition
    double lastResult; // To store last result

public:
    float num1, num2;

    Calculator(){
    	lastResult=0;
	}

    double add() {
        lastResult = num1 + num2;
        display.showResult(lastResult);
        return lastResult;
    }

    double subtract() {
        lastResult = num1 - num2;
        display.showResult(lastResult);
        return lastResult;
    }

    double multiply() {
        lastResult = num1 * num2;
        display.showResult(lastResult);
        return lastResult;
    }

    double divide() {
        if (num2 == 0) {
            cout << "Error! Division by zero." << endl;
            return lastResult;
        }
        lastResult = num1 / num2;
        display.showResult(lastResult);
        return lastResult;
    }

    void showLast() {
        display.showLastResult(lastResult);
    }
};

