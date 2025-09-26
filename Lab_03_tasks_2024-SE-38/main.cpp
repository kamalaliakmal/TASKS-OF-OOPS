#include<iostream>
#include<string>
#include"bankAccount.h"
#include"deepCopy.h"
#include"singleInheritance.h"
#include"rectangle.h"
using namespace std;
     // TASK 01
	                               
int main(){
    BankAccount Acc1(200.0);
    BankAccount Acc2 = Acc1;  // Default copy constructor (shallow copy)

    cout<<"Initial Balances:"<<endl;
    Acc1.displayBalance();
    Acc2.displayBalance();

    // Modify acc2
    Acc2.update(3500.0);                                
    cout<<"After modifying Acc2:"<<endl;
    Acc1.displayBalance();  // Change also occurs in Acc1.
    Acc2.displayBalance();

    return 0;
}

     // TASK 02

int main(){
    BankAccount Acc1(1000.0);
    BankAccount Acc2 = Acc1;  // Deep copy

    cout<<"Initial Balances:"<<endl;
    Acc1.displayBalance();
    Acc2.displayBalance();

    // Modify Acc2
    Acc2.update(3500.0); 
	                               
    cout<<"After modifying Acc2:"<<endl;
    Acc1.displayBalance();  // Acc1 remains unchanged
    Acc2.displayBalance();  // Acc2 is updated

    return 0;
}

//    // TASK 03

int main(){
	
	Person P;
	P.setPerson ("Ali",23);
	P.showPerson();
	Student S;
	S.setStudent("Kamal",19,38);
	S.showStudent();
		
	return 0;
}

    //  TASK 04

int main(){
	// Creating object of derived class
	Rectangle rect;
	
	return 0;
}
















