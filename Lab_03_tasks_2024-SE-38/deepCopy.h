#include<iostream>
#include<string>
using namespace std;

  class BankAccount {
  private:
    double* balance;
  public:
    // Constructor
    BankAccount(double bal) {
        balance = new double(bal);
        cout << "Constructor: Balance allocated at " << balance << " with value $" << *balance << endl;
    }
    // Deep Copy Constructor
    BankAccount(const BankAccount& Acc) {
        balance = new double(*(Acc.balance));  // Deep copy
        cout << "Copy Constructor: Deep copy made at " << balance << " with value $" << *balance << endl;
    }
    // Update function
    void update(double amount) {
        *balance += amount;
    }
    // Display function
    void displayBalance() const {
        cout << "Balance at address " << balance << ": $" << *balance << endl;
    }
    // Destructor
    ~BankAccount() {
        cout << "Destructor: Deleting balance at " << balance << endl;
        delete balance;
    }
 };


