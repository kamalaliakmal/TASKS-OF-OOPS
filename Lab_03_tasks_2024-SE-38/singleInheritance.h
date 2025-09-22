#include<iostream>
#include<string>
using namespace std;
class Person{
		protected:
			string name;
			int age;
		public:	
		void setPerson(string n,int a){
			name=n;
			age=a;
		}
		
		void showPerson(){
		  cout<<"The Name of Person is: "<< name <<endl;
          cout<<"The Age of Person is: "<< age <<endl;
		}
	};
	class Student:public Person{
		public:
			int rollNo;
			
		void setStudent(string n,int a,int r){
              setPerson(n, a); // call base class method
			  rollNo=r;
			}
			void showStudent(){
	      cout << "\nThe Name of Student is: "<< name << endl;
          cout << "The Age of Student is: "<< age << endl;
          cout << "The Roll No of Student is: "<< rollNo <<endl;
			
		}	
	};
