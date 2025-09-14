#include <iostream>
#include "hw1.h"
#include <assert.h>

/// <summary>
/// Сумма квадратов цифр
/// </summary>
/// <param name="num"></param>
/// <returns></returns>
int sumOfSquares(int num)
{
	auto cnt = 0; num = abs(num);
	while (num > 0)
	{
		int x = num % 10;
		cnt += x * x;
		num /= 10;
	}

	return cnt;
}

/// <summary>
/// Проверка числа на палиндром
/// </summary>
/// <param name="num"></param>
/// <returns></returns>
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

/// <summary>
/// Реверс числа
/// </summary>
/// <param name="num"></param>
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

/// <summary>
/// Таблица степеней
/// </summary>
/// <param name="n"></param>
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

/// <summary>
/// Количество дней для удвоения вклада
/// </summary>
/// <param name="deposit"></param>
/// <param name="rate"></param>
/// <returns></returns>
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

/// <summary>
/// Произведение цифр числа
/// </summary>
/// <param name="num"></param>
/// <returns></returns>
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


/// <summary>
/// Возведение в степень
/// </summary>
/// <param name="base"></param>
/// <param name="exp"></param>
/// <returns></returns>
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

/// <summary>
/// Проверка числа Армстронга
/// </summary>
/// <param name="num"></param>
/// <returns></returns>
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

/// <summary>
/// Вывод ромба из чисел
/// </summary>
/// <param name="n"></param>
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

/// <summary>
/// Вспомогательная функция для степени
/// </summary>
/// <param name="base"></param>
/// <param name="pow"></param>
/// <returns></returns>
double dpower(double base, int pow)
{
	double res = 1.0;
	for (int i = 0; i < pow; i++)
		res *= base;
	return res;
}

/// <summary>
/// Расчет ежемесячного платежа по кредиту
/// </summary>
/// <param name="loan"></param>
/// <param name="rate"></param>
/// <param name="years"></param>
/// <returns></returns>
double calculateMonthlyPayment(double loan, double rate, int years)
{
	assert(rate > 0 && loan > 0 && years > 0);
	double monthly_rate = rate / 100 / 12;
	int n = years * 12;

	double numP = dpower(1 + monthly_rate, n);

	double monthly_payment = loan * (monthly_rate * numP) / (numP - 1);

	return monthly_payment;
}