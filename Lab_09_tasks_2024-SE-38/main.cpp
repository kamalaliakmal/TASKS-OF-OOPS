#include <iostream>
#include"staticDataMember.h"
#include"staticFunction.h"
using namespace std;

// =============== TASK 01 (Static Data Member) ========================

int main() {
    Counter c1; 
    Counter c2; 
    Counter c3; 

    // Show final count using static function
   Counter::printCount();

    return 0;
}

//=============== TASK 02 (Static Function) ========================

int main() {
    Counter c1;
    Counter::print(); // prints 1

    Counter c2;
    Counter::print(); // prints 2

    Counter c3;
    Counter::print(); // prints 3

    return 0;
}
