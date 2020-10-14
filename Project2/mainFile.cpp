#include "BankSavingsAccount.h"
#include "MarketMoney.h"
#include "MoneyInYourPocket.h"
#include <cmath>

const double INFLATION = 1.02;
int main() {
	string nameofUser;
	double amtSavings, amtMarket, amtPocket;
	double rate;
	int age;
	int retirementAge;

	cout << "Hello and Welcome to your Retirement calculator! Please enter your name:" << endl;
	cin >> nameofUser;
	cout << "Please enter the amount that you would like in your deposit savings account:" << endl;
	cin >> amtSavings;
	cout << "Please enter the interest rate that your bank offers. Omit the '%' symbol:" << endl;
	cin >> rate;
	rate = (rate + 100) / 100.0;
	BankSavingsAccount User1Savings(nameofUser, amtSavings, rate);


	cout << "Please enter the amount that you would like in your investment account:" << endl;
	cin >> amtMarket;
	MarketMoney User1Invest(nameofUser, amtMarket);

	cout << "Please enter the amount that you would like in your checking/pocket account:" << endl;
	cin >> amtPocket;
	MoneyInYourPocket User1Pocket(nameofUser, amtPocket);

	cout << "Please enter your age:" << endl;
	cin >> age;

	cout << "Now enter the age at which you would like to retire:" << endl;
	cin >> retirementAge;

	amtSavings = User1Savings.getBalance();
	amtMarket = User1Invest.getBalance();
	amtPocket = User1Pocket.getBalance();
	while (retirementAge - age > 0) {
		amtSavings *= User1Savings.getInterestRate();
		amtMarket *= User1Invest.ApplyRt();
		age++;

		int n = 0;

		double amountChanged = 0;
		int acctSelector;
		while (n != -1) {
			cout << "Here is the non-inflation adjusted balances in each holding. In your savings account, you have: $" << amtSavings << ". In your investment account, you have: $" << amtMarket << ". In your pocket amount, you have $" << amtPocket << "." << endl;
			cout << "Please enter 0 to make a withdrawal. Enter 1 to make a deposit, and enter -1 to move on:" << endl;
			cin >> n;
			if (n != -1) {
				if (n == 0) {
					cout << "Please enter the amount you would like to withdraw:" << endl;
					cin >> amountChanged;
				}
				else if (n == 1) {
					cout << "Please enter the amount you would like to deposit:" << endl;
					cin >> amountChanged;
				}

				cout << "Please enter which account you would like to withdraw from. Enter 1 for Savings, 2 for Investment, and 3 for Pocket: " << endl;
				cin >> acctSelector;

				if (n == 1) {
					switch (acctSelector) {
					case 1:
						User1Savings.AddMoney(amountChanged);
						break;
					case 2:
						User1Invest.addMoney(amountChanged);
						break;
					case 3:
						User1Pocket.addMoney(amountChanged);
						break;
					}

				}
				else if (n == 0) {
					switch (acctSelector) {
					case 1:
						User1Savings.WithdrawMoney(amountChanged);
						break;
					case 2:
						User1Invest.withDrawMoney(amountChanged);
						break;
					case 3:
						User1Pocket.withDrawMoney(amountChanged);
						break;
					}
				}


			}
		}

	}

	cout << "Here is that balance with respect to today's value.\t In your savings account, you have: $" << amtSavings / pow(INFLATION, 62 - age) << ". In your investment account, you have: $" << amtMarket / pow(INFLATION, 62 - age) << ". In your pocket amount, you have $" << amtPocket / pow(INFLATION, 62 - age) << "." << endl;
	cout << "Your grand total relative to today's value is " << (amtSavings + amtMarket + amtPocket) / pow(INFLATION, 62 - age) << endl;








	return 0;
}