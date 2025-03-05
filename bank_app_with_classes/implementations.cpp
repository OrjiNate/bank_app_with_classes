#include <iostream>
using namespace std;
#include "allDefinitions.h"

class BankAccount
{
private:
	string accountNo;
	string accountHolder;
	double balance;

public:
	// default constructor
	 BankAccount()
	 {
		 accountNo = "";
		 accountHolder = "Default_User";
		 balance = 0.0;
	 }
	 // alternate constructor
	 BankAccount(string set_accNo, string set_accHold, double set_bal)
	 {
		 accountNo = set_accNo;
		 accountHolder = set_accHold;
		 balance = set_bal;
	 }

	 void deposit(double amount)
	 {
		 balance += amount;
		 cout << "Your deposit was succesful \n";
	 }

	 void withdraw(double amount)
	 {
		 if (amount > balance)
		 {
			 cout << "Insufficent funds \n";
			 cout << "Check your balance \n";
		 }
		 else
		 {
			 balance -= amount;
			 cout << "Your withdrawal was succesfull \n";
		 }
	 }

	 void displayAccount()
	 {
		 cout << "This is the selected users account name \n";
		 cout << "accountNo: " << accountNo << endl;
		 cout << "accountHolder: " << accountHolder << endl;
		 cout << "balance: " << balance << endl;

		 cout << "Done \n";

	 }

};