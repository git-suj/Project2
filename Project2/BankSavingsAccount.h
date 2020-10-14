#pragma once
#include<String>
#include<iostream>


using namespace std;

class BankSavingsAccount{
	private:
		double intRt;
		double balance = 0.0;
		string nameUser;
		void setNameUser(string name);
		void setBalance(double amount);

	public:
		BankSavingsAccount(string name, double balance, double intRate);
		void setInterestRate(double rate = 1.02);
		void AddMoney(double moneyAdd);
		void WithdrawMoney(double moneyRemoved);
		double getBalance();
		double getInterestRate();
};

