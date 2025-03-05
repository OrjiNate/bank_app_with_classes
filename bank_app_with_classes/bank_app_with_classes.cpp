

#include <iostream>
#include <string>
using namespace std;
#include "implementations.cpp"

int main()
{
	BankAccount user1 = BankAccount("4300","Orji Nathaniel",10000.0);
	BankAccount user2 = BankAccount();

	user1.deposit(500);
	user1.displayAccount();
	user1.withdraw(1000);
	user1.displayAccount();

	user2.withdraw(100);
	user2.displayAccount();
	user2.deposit(10000.0);
	user2.displayAccount();

}


