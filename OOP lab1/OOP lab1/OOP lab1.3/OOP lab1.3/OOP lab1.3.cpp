/*Створіть клас з ім'ям time, що містить три поля типу int, призначених
для зберігання годин, хвилин і секунд. Один з конструкторів класу повинен ініціалізувати
поля нульовими значеннями, а інший конструктор - заданим набором значень. Створітьметод класу, який буде виводити значення полів на екран у форматі 11:59:59, і метод,
складає значення двох об'єктів типу time, переданих в якості аргументів.*/
#include "stdafx.h"
#include<iostream>
using namespace std;
class time {
	int minuts;
	int hours;
	int seconds;
public:
	time() { minuts = seconds = hours = 0; }
	time(int _minuts ,int _hours , int _seconds)
	{
		minuts = _minuts;
		hours = _hours;
		seconds = _seconds;
	}
	void get() {
		cout << hours <<":"<< minuts <<":"<<seconds<<endl;
	}
	void Sumtime(time time1,time time2) {	
		minuts = time1.minuts + time2.minuts;
		hours = time1.hours + time2.hours;
		seconds = time1.seconds + time2.seconds;
	}
};
int main()
{
	time time1,time2(12,4,59);
	time time3;
	time3.Sumtime(time1,time2);
	time1.get();
	time2.get();
	time3.get();


	system("pause");
    return 0;
}

