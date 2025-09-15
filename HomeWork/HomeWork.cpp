#include <iostream>
#include "hw1.h"

int main()
{
	std::setlocale(LC_ALL, "RUSSIAN");
	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 1" << std::endl;
		std::cout << "Введите число, чтобы найти сумму квадратов его цифр: " << std::endl;
		int num1;
		std::cin >> num1;
		std::cout << "Сумма квадратов цифр: " << sumOfSquares(num1) << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 2" << std::endl;
		std::cout << "Введите число, которое хотите проверить на палиндром: " << std::endl;
		int num2;
		std::cin >> num2;
		auto flag = IsPalindrone(num2);
		if (flag)
			std::cout << "Число: " << num2 << " является палиндромом: True" << std::endl;
		else
			std::cout << "Число: " << num2 << " является палиндромом: False" << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 3" << std::endl;

		std::cout << "Введите число для 'переворота': " << std::endl;

		int num3;

		std::cin >> num3;

		reverseNumber(num3);

		std::cout << "Результат 'поворота': " << num3 << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 4" << std::endl;
		std::cout << "Введите размер таблицы степей: " << std::endl;
		int n;
		std::cin >> n;
		printPowerTable(n);
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 5" << std::endl;

		std::cout << "Введите сумму и ставку для рассчета дней: " << std::endl;

		double deposit, rate;

		std::cin >> deposit >> rate;

		std::cout << "Кол-во дней: " << daysToDoubleDeposit(deposit, rate) << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 6" << std::endl;

		std::cout << "Введите число, чтобы посчитать произведение его цифр: " << std::endl;

		int num5;

		std::cin >> num5;

		std::cout << "Полученное произведение: " << productOfDigits(num5) << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 7" << std::endl;

		std::cout << "Введите число(вещественное) и степень в которую хотите возвести(целочисленное): " << std::endl;
		double bases;
		int expp;

		std::cin >> bases >> expp;

		std::cout << "Полученное число: " << power(bases, expp) << std::endl;
	}

	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 8" << std::endl;
		std::cout << "Введите число, для проверки. Является ли оно числом Армстронга: " << std::endl;
		int isarmnum;
		std::cin >> isarmnum;
		
		auto flag2 = isArmstrong(isarmnum);

		if (flag2)
			std::cout << "Является ли " << isarmnum << " число Армстронга: True" << std::endl;
		else
			std::cout << "Является ли " << isarmnum << " число Армстронга: True" << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 9" << std::endl;

		std::cout << "Введите число для посторойки 'алмаза'" << std::endl;

		int nn;

		std::cin >> nn;

		printNumberDiamond(nn);
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	{
		std::cout << "Задание 10" << std::endl;

		std::cout << "Расчитаем ваш ежемесячный платеж по кредиту. Введите сумму кредите(вещественное), годовая процентная ставка(вещественное), кол-во лет(целочисленное): " << std::endl;

		double loan, rate;
		int years;

		std::cin >> loan >> rate;
		std::cin >> years;
		std::cout << "Ваш ежемесячный платеж: " << calculateMonthlyPayment(loan, rate, years) << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
}
