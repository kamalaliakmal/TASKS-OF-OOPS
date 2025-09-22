#include <iostream>
#include <cmath> 
#include"runtimePolymorphism.h"
using namespace std;

int main() {
	
    Shape* shapePtr; // Pointer to base class
    // Rectangle
    Rectangle rect(18.0, 3.0);
    shapePtr = &rect;
    cout << "Rectangle Area: " << shapePtr->area() << endl;
    // Circle
    Circle circ(9.0);
    shapePtr = &circ;
    cout << "Circle Area: " << shapePtr->area() << endl;

    return 0;
}
