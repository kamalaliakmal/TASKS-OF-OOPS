#include<iostream>
#include<string>
#include"employee.h"
#include"bankAccount.h"
#include"rectangle.h"
#include"locker.h"
using namespace std;
      //   TASK 01
       // EMPLOYEE
int main(){
	Employee employee;
	employee.displayDetails();
	
	
	return 0;
}

     //    TASK 02
      // BANK ACCOUNT
int main(){
	
	BankAccount Account1("PK0309800780100","Awais",10000);
	cout<<"Parameterized Constructor:\n";
	Account1.showAccountDetails();
	return 0;
}

   //    TASK 03
    // RECTANGLE 
int main(){
	
    Rectangle rec1;
    Rectangle rec2(12.3,32.34);
    Rectangle rec3(12.4);
    
    rec1.area();
    rec1.displayArea();
    
    rec2.area();
 	  rec2.displayArea(); 
	
 	  rec3.area();
	  rec3.displayArea(); 
	  return 0;
}

   //    TASK 04
   //  DESTRUCTOR

int main(){
	cout<<"Stack Memory\n";
	{
    Locker locker_one;
    }
    cout<<"\nHeap Memory\n";
    Locker* ptr=new Locker();
    delete ptr;
	return 0;
}




