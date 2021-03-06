/*Завдання 3. В класі Int, який розроблений в завданні №1 лабораторної роботи №1,
перевизначте чотири цілочисельні арифметичні операції («+», «-», «*» , «/») так, щоб
їх можна було використовувати для операцій з об'єктами класу Int. Якщо результат
будь-якої з операцій виходить за межі типу int (в 32-бітній системі), що може мати
значення від 2 147 483 648 до -2 147 483 648, то операція повинна послати
повідомлення про помилку і завершити програму. Такі типи даних корисні там, де
помилки можуть бути викликані арифметичним переповненням, яке неприпустимо.
Напишіть програму для перевірки цього класу.
Підказка: для полегшення перевірки переповнення виконуйте обчислення з
використанням типу long double.*/
#include "stdafx.h"
#include <iostream>
using namespace std;
class Int {
private:
	int Integer;
public:
	Int(int a) {
		Integer = a;
	}
	void setInt(int _Int) {
		Integer = _Int;
	}
	int getInt() {
		return Integer;
	}
	void set0() {
		Integer = 0;
	}
	int sum(int num1, int num2)
	{
		return num1 + num2;
	}
	int operator +(Int& a)
	{
		return Integer + a.Integer;
	}
	int operator -(Int& a)
	{
		return Integer - a.Integer;
	}
	int operator *(Int& a)
	{
		return Integer * a.Integer;
	}
	double operator /(Int& a)
	{
		return ((double(Integer)) / a.Integer);
	}


};
int main()
{
	Int a(13), b(5);
	Int c = a + b;
	cout << c.getInt() << endl << a / b;;
	system("pause");
	return 0;
	
}