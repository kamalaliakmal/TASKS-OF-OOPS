#include<iostream>
#include<string>
using namespace std;
class Rectangle{
	private:
	   double length,width;
	
	public:
	  // Default Constructor
	  Rectangle(){
	  	length=1.0;
	  	width=1.0;
	  }	
	  // Parameterized Constructor
	  Rectangle(double l,double w){
	  	length=l;
	  	width=w;
	  }
	  // Parameterized Constructor using 1 parameter
	  Rectangle(double k){
	  	length=k;
	  	width=k;
	  }	
		
	double area(){
		double Area=length*width;
		return Area;
	}
	void displayArea(){
		cout<<"Area of rectangle is = "<<area()<<endl;
	}	
		
		
};
