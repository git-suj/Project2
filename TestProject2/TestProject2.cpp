#include "pch.h"
#include "CppUnitTest.h"
#include "..\Project2\BankSavingsAccount.h"
#include "..\Project2\MarketMoney.h"
#include "..\Project2\MoneyInYourPocket.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject2
{
	TEST_CLASS(TestProject2)
	{
	public:
		
		TEST_METHOD(TestMethodBankSavingsRate)
		{
			//Arrange
			double expectedValue = 1.05;
			
			//Act
			BankSavingsAccount UserSavings("David", 100000, 1.05);
			double actualValue = UserSavings.getInterestRate();

			//Assert
			Assert::AreEqual(expectedValue, actualValue);

		}

		TEST_METHOD(TestMethodBankSavingsAmt)
		{
			//Arrange
			double expectedValue = 1.05;

			//Act
			BankSavingsAccount UserSavings("David", 100000, 1.05);
			double actualValue = UserSavings.getBalance();

			//Assert
			Assert::AreEqual(expectedValue, actualValue);

		}

		TEST_METHOD(TestMethodMarketMoneyRate)
		{
			//Arrange
			double expectedRate = 1.05;

			//Act
			MarketMoney UserMarket("David", 100000, 4);
			double actualRate = UserMarket.ApplyRt();

			//Assert
			Assert::AreEqual(expectedRate, actualRate);


		}


		TEST_METHOD(TestMethodMarketMoneyAmt)
		{
			//Arrange
			double expectedValue = 100000;

			//Act
			MarketMoney UserMarket("David", 100000);
			double actualValue = UserMarket.getBalance();

			//Assert
			Assert::AreEqual(expectedValue, actualValue);

		}

		TEST_METHOD(TestMethodPocketMoneyAmt)
		{
			//Arrange
			double expectedValue = 100000;

			//Act
			MoneyInYourPocket UserPocket("David", 100000);
			double actualValue = UserPocket.getBalance();

			//Assert
			Assert::AreEqual(expectedValue, actualValue);


		}
	};
}
