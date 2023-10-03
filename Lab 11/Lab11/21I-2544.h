#pragma once
#include <iostream>
using namespace std;


class Account
{
public:


	Account() 
	{
		balance = 0;
		serviceFee = 0;
	}

	Account(float b, float sf) 
	{
		balance = b;
		serviceFee = sf;
	}
	//pre fix increment
	Account operator ++ ()
	{
		Account temp;
		temp.balance = ++serviceFee;
		return temp;
	}

	// Notice int inside barcket which indicates postfix increment.
	Account operator ++ (int)
	{
		Account temp;
		temp.balance = serviceFee++;
		return temp;
	}

	//pre fix decrement
	float operator -- ()
	{
		return balance -= serviceFee;
	}

	// Notice int inside barcket which indicates postfix decrement.
	float operator -- (int)
	{
		
		return balance -= serviceFee;
		
	}

	float operator += (float obj) {
		return balance + obj;
	}

	float operator -= (float obj) {
		return balance -= obj;
	}

	float operator ~() 
	{
		return balance;
	}

	friend void iAmCustomersFriend(Account acc) 
	{
		cout << endl << "The value of balance = " << acc.balance << endl;
		cout << endl << "The value of service fee = " << acc.serviceFee << endl;

	}

	friend Account sumAccountsIntoNewAccount(Account a1, Account a2)
	{
		int sum = a1.balance + a2.balance;
		Account temp;
		temp.balance = sum;

		return temp;
	}


	
private:

	float balance = 0;
	float serviceFee = 0;

};