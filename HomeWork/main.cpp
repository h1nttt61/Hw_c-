#include <iostream>
#include "hw1.h"

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    {
        std::cout << "Задание 1" << std::endl;
        std::cout << "Введите число, в котором нужно найти суммы квадратов цифр: " << std::endl;
        int n;
        std::cin >> n;
        std::cout << "Сумма квадрата цифр " << n << " : " << sumOfSquares(n) << std::endl;
    }
    {
        std::cout << "Задание 2" << std::endl;
        std::cout << "Введите число, которое нужно проверить на полиндром: " << std::endl;
        int n;
        std::cin >> n;
        std::cout << "Является ли " << n << " полиндромом? " << std::boolalpha <<  IsPalindrone(n) << std::endl;
    }
    {
        std::cout << "Задание 3" << std::endl;
        std::cout << "Введите число, которое нужно 'перевернуть' " << std::endl;
        int n;
        std::cin >> n;
        reverseNumber(n);
        std::cout << "Перевернутое число -> " << n << std::endl;
    }
    {
        std::cout << "Задание 4" << std::endl;
        std::cout << "Введите число(n), чтобы вывести таблицу степеней n*n" << std::endl;
        int n;
        std::cin >> n;
        printPowerTable(n);
        std::cout << std::endl;
    }
    {
        std::cout << "Задание 5" << std::endl;
        std::cout << "Введите начальную сумму и дневную ставку, для подсчета дней до удвоения вклада : " << std::endl;
        double sum, rate;
        std::cin >> sum >>  rate;
        std::cout << "Вклад удвоется через " << daysToDoubleDeposit(sum ,rate)  << " дней " << std::endl;
    }
    {
        std::cout << "Задание 6" << std::endl;
        std::cout << "Введите число, для нохождения произведения его цифр: " << std::endl;
        int n;
        std::cin >> n;
        std::cout << "Произведение цифр числа " << n << " : " << productOfDigits(n) << std::endl;
    }
    {
        std::cout << "Задание 7" << std::endl;
        std::cout << "Введите основание и степень в которую хотите возвести число: " << std::endl;
        double base;
        int exp;
        std::cin >> base >> exp;
        std::cout << "Число " << base << " в степени " << exp << " " << power(base, exp) << std::endl;
    }
    {
        std::cout << "Задание 8" << std::endl;
        std::cout << "Введите число, которые нужно проверить, является ли оно число Армстронга: " << std::endl;
        int n;
        std::cin >> n;
        std::cout << "Число " << n << " является числом Армстронга? " << std::boolalpha << isArmstrong(n) << std::endl;
    }
    {
        std::cout << "Задание 9" << std::endl;
        std::cout << "Введите число, для вывода ромбовидного паттерна " << std::endl;
        int n;
        std::cin >> n;
        printNumberDiamond(n);
    }
    {
        std::cout << "Задание 10" << std::endl;
        std::cout << "Введите сумму кредита, годовую процентную ставку и срок кредите. Это все поможет в рассчете ежемесячного платежа по кредиту: " << std::endl;
        double loan, rate;
        int years;
        std::cin >> loan >> rate >> years;
        std::cout << "Ежемесячный платеж " << calculateMonthlyPayment(loan, rate, years) << std::endl;
    }
}
