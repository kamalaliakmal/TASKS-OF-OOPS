#include<iostream>
#include<string>
using namespace std;
                 //  TASK 01
//class Student{
//	public:
//	// Data Members
//	string name;
//	int roll_Number;
//	float marks;
//	
//	// Member Functions
//	
//	void getData(){         //Input Function
//		cout<<"Enter the name of student : ";
//		cin>>name;
//		cout<<"Enter the roll number of student : ";
//		cin>>roll_Number;
//		cout<<"Enter the marks of student : ";
//		cin>>marks;
//	}
//	
//	void displayData(){     //Output Function
//		cout<<"The Name of student is : "<<name<<endl;
//		cout<<"The Roll Number of student is : "<<roll_Number<<endl;
//		cout<<"The Marks of student is : "<<marks<<endl;
//	}
//};
//
//int main(){
//	Student std;
//	std.getData();
//	std.displayData();
//	return 0;
//}

                 //    TASK 02

//class Rectangle{
//	public:
//	int length;
//	int width;
//	void setDimensions();
//	void area();
//	void perimeter();
//	
//};
//void Rectangle::setDimensions(){
//	cout<<"Enter the length of rectangle : ";
//	cin>>length;
//	cout<<"Enter the width of rectangle : ";
//	cin>>width;
//}
//void Rectangle::area(){
//   int area=length*width;
//   cout<<"\nThe area of rectangle is = "<<area<<endl;
//}
//void Rectangle::perimeter(){
//   float perimeter=2*(length+width);
//   cout<<"The perimeter of rectangle is = "<<perimeter;
//}
//
//int main(){
//	Rectangle rect;
//	rect.setDimensions();
//	rect.area();
//	rect.perimeter();
//	return 0;
//}

            // TASK 03
//
//class Voter{
//	public:
//	string name;
//	int age;
//	bool isEligible();
//};
//bool Voter::isEligible() {
//    if (age > 18) {
//        return true;
//    } else {
//        return false;
//    }
//}
//int main(){
//	Voter person;
//	cout<<"Enter the name of voter : ";
//	cin>>person.name;
//	cout<<"Enter the age of voter : ";
//	cin>>person.age;
//	person.isEligible();
//	if(person.isEligible())
//	{
//		cout<<"\n You can cast a vote.";
//	}else{
//		cout<<"\n You cannot cast a vote.";
//	}
//	return 0;
//	}

          //   TASK 04
//
//class Temprature{
//	public:
//		float celcius;
//		
//		double convert_temp(){
//			 double Farenheight=((celcius*9)/5)+32;
//			 return Farenheight;
//		}
//	    void display_value(){
//	    	cout<<"\n The temprature in Farenheight is = "<<convert_temp();
//		}
//};
//int main(){
//	Temprature temp;
//	cout<<"Enter the temprature in celcius : ";
//	cin>>temp.celcius;
//	temp.convert_temp();
//	temp.display_value();
//	return 0;
//}

       //  TASK 05
//
//class Calculator{
//	public:
//		float num1;
//		float num2;
//	double add();
//	double subtract();
//	double multiply();
//	double divide();
//};
//double Calculator::add(){
//	double sum=num1+num2;
//	cout<<"\n The sum of two number is = "<<sum;
//}
//double Calculator::subtract(){
//	double minus=num1-num2;
//	cout<<"\n The subtraction of two number is = "<<minus;
//}
//double Calculator::multiply(){
//	double mult=num1*num2;
//	cout<<"\n The multiplication of two number is = "<<mult;
//}
//double Calculator::divide(){
//	double div=num1/num2;
//	cout<<"\n The division of two number is = "<<div;
//}
//
//int main(){
//	Calculator cal;
//	char choice;
//	cout<<"Enter the first number : ";
//	cin>>cal.num1;
//	cout<<"Enter the second number : ";
//	cin>>cal.num2;
//	cout<<"Enter the operation(-,+,*,/) : ";
//	cin>>choice;
//	switch(choice)
//	{
//	case '+':
//	cal.add();	
//	break;	
//	case '-':
//	cal.subtract();	
//	break;	
//	case '*':
//	cal.multiply();	
//	break;	
//	case '/':
//	cal.divide();	
//	break;	
//	default:
//	cout<<"\n Invalid choice.";	
//	}
//	
//	return 0;
//}


  
















