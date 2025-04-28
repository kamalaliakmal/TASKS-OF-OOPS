#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:
		string accountNumber;
		string accountHolder;
		double balance;
		
	public:
		BankAccount(string an,string ah,double b){
			accountNumber=an;
			accountHolder=ah;
			balance=b;
		}
	    void showAccountDetails(){
	    	cout<<"The Account Number of Account is : "<<accountNumber<<endl;
	    	cout<<"The Account Holder of Account is : "<<accountHolder<<endl;
	    	cout<<"The balance of Account is : "<<balance<<endl;
		}
	
};
