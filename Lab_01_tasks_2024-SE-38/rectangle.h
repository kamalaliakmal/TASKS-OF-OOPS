#include<iostream>
#include<string>
using namespace std;
class Rectangle{
	public:
	int length;
	int width;
	void setDimensions();
	void area();
	void perimeter();
	
};
void Rectangle::setDimensions(){
	cout<<"Enter the length of rectangle : ";
	cin>>length;
	cout<<"Enter the width of rectangle : ";
	cin>>width;
}
void Rectangle::area(){
   int area=length*width;
   cout<<"\nThe area of rectangle is = "<<area<<endl;
}
void Rectangle::perimeter(){
   float perimeter=2*(length+width);
   cout<<"The perimeter of rectangle is = "<<perimeter;
}

