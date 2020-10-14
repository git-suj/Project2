#include "MoneyInYourPocket.h"

using namespace std;

MoneyInYourPocket::MoneyInYourPocket(string name, double deposit) {
	setAmountinBank(deposit);
}

void MoneyInYourPocket::setAmountinBank(double amount) {
	balance = amount;
}

void MoneyInYourPocket::setNameinBank(string name) {
	accountName = name;
}

void MoneyInYourPocket::addMoney(double amount) {
	balance += amount;
}

void MoneyInYourPocket::withDrawMoney(double amount) {
	if (amount > balance) {
		cout << "You have " << balance << "in your account. By choosing to withdraw the amount, you will be all the money from your account." << endl;
		balance = 0;
	}
	else { balance -= amount; }
}
double MoneyInYourPocket::getBalance() {
	return balance;
}