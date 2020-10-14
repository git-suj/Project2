#include "MarketMoney.h"

using namespace std;

MarketMoney::MarketMoney(string name, double deposit, int seed) {
	setName(name);
	addMoney(deposit);
	srand(seed);
}

void MarketMoney::setName(string name) {
	accountName = name;
}

double MarketMoney::ApplyRt() {
	double percentage = (rand() % 13 + 98.0) / 100; //ensures that the decimal to round to will be in range from .98 to 1.10
	return percentage;
}

void MarketMoney::addMoney(double money) {
	balance += money;
}

void MarketMoney::withDrawMoney(double money) {
	if (money+ 10 >= balance) {
		cout << "You have " << balance << " remaining. This amount will be withdrawn and your balance will be 0." << endl;
		balance = 0;
	}
	else { balance -= money+10; }
}

double MarketMoney::getBalance() {
	return balance;
}
