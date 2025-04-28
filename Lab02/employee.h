#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		int id;
		string name;
		double salary;
	
	public:
	Employee(){
		id=0;
		name="Not Assigned";
		salary=0.0;
		
	}	
	
	void displayDetails(){
		cout<<"The ID of employee is : "<<id<<endl;
		cout<<"The name of employee is : "<<name<<endl;
		cout<<"The salary of employee is : "<<salary<<endl;
	}	
	
};
