#include <iostream>
#include <string>
#include <cstdio>
#include <windows.h>



struct person
{
	int number;
	std::string name;
	double balance;
};

void newblance(person& p)
{
	
	std::cout << "Введите новый баланс: ";
	std::cin >> p.balance;
}
int main()
{   
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	person p;
	std::cout << "Введите номер счёта: ";
	std::cin >> p.number;
	std::cout << "Ввдите имя владельца: ";
	std::cin >> p.name;
	std::cout << "Введите баланс: ";
	std::cin >> p.balance;
	newblance(p);
	
	std::cout << "Ваш счёт: " << p.name << ", " << p.number << ", " << p.balance << std::endl;
}