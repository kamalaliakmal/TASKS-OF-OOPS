#include <iostream>
#include <cmath> 
using namespace std;
// Base class: Shape
class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
	this->length=l;
	this->width=w;
	}
    double area() override {
        return length * width;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
	this->radius=r;
	}
    double area() override {
        return 3.14*(radius * radius);
    }
};

