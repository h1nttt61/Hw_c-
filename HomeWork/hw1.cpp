#include <iostream>
#include "hw1.h"
#include <assert.h>

int sumOfSquares(int num)
{
	auto cnt = 0;
	while (num > 0)
	{
		int x = num % 10;
		cnt += x * x;
		num /= 10;
	}

	return cnt;
}

bool IsPalindrone(int num)
{
	num = num < 0 ? -num : num;
	auto temp = num, rev = 0;

	while (num > 0)
	{
		int x = num % 10;
		rev = rev * 10 + x;
		num /= 10;
	}

	return rev == temp;
}
void reverseNumber(int& num)
{
	int sign = num > 0 ? 1 : -1;
	num = num > 0 ? num : -num;
	auto Cnum = 0;

	while (num > 0)
	{
		Cnum = Cnum * 10 + num % 10;
		num /= 10;
	}

	num = Cnum * sign;
}

void printPowerTable(int n)
{
	for (int i = 1; i <= n; i++)
	{
		int pow = 1;
		for (int j = 1; j <= n; j++)
		{
			pow *= i;
			std::cout << i << "**" << j << " = " << pow << "\t";

		}
		std::cout << std::endl;
	}
}

int daysToDoubleDeposit(double deposit, double rate)
{
	assert(rate > 0 && deposit > 0);
	double target = deposit * 2, current = deposit;     
	int days = 0;                 

	while (current < target) {
		current += current * (rate / 100);  
		days++;                             
	}

	return days;
}

int productOfDigits(int num)
{
	num = abs(num);
	auto res = 1;

	while (num > 0)
	{
		res *= num % 10;
		num /= 10;
	}
	
	return res;
}

double power(double base, int exp)
{
	if (exp == 0) return 1.0;

	auto absExp = abs(exp);
	double res = 1.0;
	int cnt = 0;

	while (cnt < absExp)
	{
		res *= base;
		cnt++;
	}

	return exp > 0 ? res : 1.0 / res;
}

bool isArmstrong(int num)
{
	int original = num, sum = 0, digitcnt = 0, temp = num;
	while (temp != 0) {
		temp /= 10;
		digitcnt++;
	}

	temp = original;

	while (temp != 0) {
		int digit = temp % 10, power = 1, count = digitcnt;

		while (count > 0) {
			power *= digit;
			count--;
		}


		sum += power;
		temp /= 10;
	}

	return sum == original;
}

void printNumberDiamond(int n)
{
	for (int i = -n + 1; i < n; i++) {
		int current = n - abs(i);

		for (int j = 0; j < abs(i); j++) {
			std::cout << " ";
		}

		for (int j = 1; j <= current; j++) {
			std::cout << j;
		}

		for (int j = current - 1; j >= 1; j--) {
			std::cout << j;
		}

		std::cout << std::endl;
	}

}

double power(double base, int pow)
{
	double res = 1.0;
	for (int i = 0; i < pow; i++)
		res *= base;
	return base;
}

double calculateMonthlyPayment(double loan, double rate, int years)
{
	double monthly_rate = rate / 100 / 12;
	int n = years * 12;

	double numP = power(1 + monthly_rate, n);

	double monthly_payment = loan * (monthly_rate * numP) / (numP - 1);

	return monthly_payment;
}