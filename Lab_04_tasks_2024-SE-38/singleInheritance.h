#include<iostream>
#include<string>
using namespace std;

class Person{
	private:
		string name;
		int age;
	
	public:
		Person(string n, int a){
			name=n;
			age=a;
		}
		void display_person_info(){
			cout<<"  Name : "<<name<<endl;
			cout<<"  Age : "<<age<<endl<<endl;	
		}
};
class Student:public Person{
	private:
		int student_id;
	
	public:
		Student(string n, int a, int id):Person(n,a){
			student_id=id;
		}
		void display_student_info(){
			cout<<"  Student ID : "<<student_id<<endl;
			display_person_info();
			
		}
};
