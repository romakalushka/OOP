/*Створіть клас Int, що імітує стандартний тип int. Єдине поле цього класу
повинно мати тип int. Створіть методи, які будуть встановлювати значення поля рівним
нулю, ініціалізувати його цілим значенням, виводити значення поля на екран і складати два
значення типу Int*/


#include "stdafx.h"
#include<iostream>
using namespace std;

class Int {
	int a ;
	int b ;
	int c;
public:
	void scan() {
		a = b = 0;
		cout << "A and B before intialization   " << a <<"  "<< b<<endl;
		cout << "write a and b " << endl;
		cin >> a >> b;
	}
	void show() { cout << "A=" << a<<endl; 
	cout << "B=" << b<<endl;
				}
	void sum() {
	
		cout << "Sum=" << a + b << endl;
	}
	
};
int main()
{
	Int objA;
	objA.scan();
	objA.show();
	objA.sum();
	system("pause");
	return 0;
}

