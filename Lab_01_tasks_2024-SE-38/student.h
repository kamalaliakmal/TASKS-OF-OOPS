#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
	// Data Members
	string name;
	int roll_Number;
	float marks;
	
	// Member Functions
	
	void getData(){         //Input Function
		cout<<"Enter the name of student : ";
		cin>>name;
		cout<<"Enter the roll number of student : ";
		cin>>roll_Number;
		cout<<"Enter the marks of student : ";
		cin>>marks;
	}
	
	void displayData(){     //Output Function
		cout<<"\n\n The Name of student is : "<<name<<endl;
		cout<<" The Roll Number of student is : "<<roll_Number<<endl;
		cout<<" The Marks of student is : "<<marks<<endl;
	}
};
