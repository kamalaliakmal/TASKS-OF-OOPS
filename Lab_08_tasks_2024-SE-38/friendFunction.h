#include <iostream>
#include <cmath> 
using namespace std;

class Rectangle; // forward declaration

class Circle {
private:
    double radius;
public:
    Circle(double r) {
        this->radius=r;
    }
    // Declare friend function
    friend double totalArea(Circle c,Rectangle r);
};

class Rectangle {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        this->length=l;
        this->width=w;
    }
    // Declare friend function
    friend double totalArea(Circle c,Rectangle r);
};

// Friend function definition
  double totalArea(Circle c,Rectangle r){
    double circArea=3.14 * c.radius * c.radius;
	double rectArea=r.length * r.width;
   
    return circArea + rectArea;
}

