#pragma once
#include<iostream>
#include<String>

using namespace std;

class MoneyInYourPocket
{
private:
	double balance;
	string accountName;

public:
	MoneyInYourPocket(string name, double deposit);
	void setAmountinBank(double account);
	void setNameinBank(string name);
	void addMoney(double amount);
	void withDrawMoney(double amount);
	double getBalance();
};

