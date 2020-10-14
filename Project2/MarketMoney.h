#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class MarketMoney
{
private:
	double balance = 0;
	string accountName;
public:
	MarketMoney(string name, double deposit = 0, int seed = 0);
	void setName(string name);
	double ApplyRt();
	void addMoney(double money);
	void withDrawMoney(double money);
	double getBalance();
};

