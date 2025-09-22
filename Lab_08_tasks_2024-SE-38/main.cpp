#include<iostream>
#include<cmath> 
#include"pureVirtualfunction.h"
#include"friendFunction.h"  
using namespace std;
// ========================= TASK 01: Pure Virtual Function =================================================== 

int main() {
	
    Rectangle r(18.0, 3.0);
    cout << "Rectangle Area: " <<r.area() << endl;
    Circle c(9.0);
    cout << "Circle Area: " << c.area() << endl;
  //Shape s;  // cannot create an object of shape as it is abtract.
  //s.area(); // cannot be used like this as area is not a member of class.
    return 0;
}

// ========================= TASK 02: Frienf Function =================================================== 

int main() {
    Rectangle rect(10, 5);
    Circle circ(7);

    cout << "Combined Total Area: " << totalArea(circ , rect) << endl;

    return 0;
}

























