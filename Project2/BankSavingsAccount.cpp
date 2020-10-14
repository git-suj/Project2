#include "BankSavingsAccount.h"

using namespace std;

BankSavingsAccount::BankSavingsAccount(string name, double deposit, double intRate) {
	setNameUser(name);
	setBalance(deposit);
	setInterestRate(intRate);
}

void BankSavingsAccount::setNameUser(string name) {
	nameUser = name;
}

void BankSavingsAccount::setBalance(double amount) {
	balance = amount;
}

void BankSavingsAccount::setInterestRate(double rate) {
	intRt = rate;
}

double BankSavingsAccount::getInterestRate() {
	return intRt;
}

void BankSavingsAccount::AddMoney(double moneyAdd) {
	balance += moneyAdd;
}

void BankSavingsAccount::WithdrawMoney(double moneyRemoved) {
	if (moneyRemoved >= balance) {
		cout << "You have " << balance << " remaining. This amount will be withdrawn and your balance will be 0." << endl;
		balance = 0;
	}
	else { balance -= moneyRemoved; }
}
double BankSavingsAccount::getBalance() {
	return balance;
}
