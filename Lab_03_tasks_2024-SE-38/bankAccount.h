                         // Copy Constructor - Shallow Copy
#include<iostream>
#include<string>
using namespace std;

class BankAccount {
  private:
    double* balance;

  public:
    // Constructor with dynamic allocation
    BankAccount(double bal) {
        balance = new double(bal);
    }

    // Function to modify balance
    void update(double amount) {
        *balance += amount;
    }

    void displayBalance()const{
        cout<<"Balance at address "<<balance<<" is: "<<*balance<<endl;
    }

    // Destructor
    ~BankAccount() {
        cout<<"Hi! I am destructor.I am deleting the balance at address "<<balance<<endl;
        delete balance;
    }
};
