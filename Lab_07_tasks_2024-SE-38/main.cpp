#include<iostream>
#include<cmath>
#include"functionOverloading.h"
#include"operatorOverloading.h"
using namespace std;

//========================= TASK 01 ( Function Overloading ) ================================

int main() {
    Calculator c;

    cout << " Add with type 'int': " << c.add(10, 5) << endl;
    cout << " Add with type 'double': " << c.add(5.5, 2.2) << endl;

    cout << " Multiply with type 'int': " << c.multiply(6, 3) << endl;
    cout << " Multiply with type 'double': " << c.divide(7.5, 2.5) << endl;

    return 0;
}

//========================= TASK 02 ( Operator Overloading ) ================================

int main() {
    Distance d1(5, 8);
    Distance d2(5, 8);
    Distance d3(6, 2);

    if (d1 == d2)
        cout << "d1 and d2 are equal" << endl;
    else
        cout << "d1 and d2 are not equal" << endl;

    if (d1 == d3)
        cout << "d1 and d3 are equal" << endl;
    else
        cout << "d1 and d3 are not equal" << endl;

    return 0;
}

