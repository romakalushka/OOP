/*Уявіть пункт для прийому платежів за проїзд по автостраді. Кожна
проїжджаюча машина повинна заплатити за проїзд 50 центів, однак частина машин платить
за проїзд, а частина проїжджає безкоштовно. У касі ведеться облік числа проїхавших машин
і сумарна виручка від плати за проїзд.
Створіть модель такої каси за допомогою класу Kasa. Клас повинен містити два поля.
Одне з них, типу unsigned int, призначене для обліку кількості проїхали автомобілів, а друге,
що матиме тип double, міститиме сумарну виручку від оплати проїзду. Конструктор повинен
ініціалізувати обидва поля нульовими значеннями. Метод payingCar () інкрементує число
машин і збільшує на 0,50 сумарну виручку. Інший метод, nорауСаг (), збільшує на одиницю
число автомобілів, але залишає без зміни виручку. Метод display () виводить обидва
значення на екран. Там, де це можливо, зробіть методи константними.
Створіть програму, яка продемонструє роботу класу. Програма повинна запропонувати
користувачеві натиснути одну клавішу для того, щоб зімітувати оплату водієм, і іншу
клавішу, щоб зімітувати несумлінного водія. Натискання клавіші Esc повинно привести до
видачі поточних значень кількості машин і виручки, і до завершення програми.*/
#include"stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;

class Kasa{
private:
	unsigned int numberCar;
	double money;
public:
	Kasa(int _numberCar, double _money) {
		numberCar = _numberCar;
		money = _money;
	}
	void payingCar() {
		numberCar++;
		money += 0.5;
	}
	void nopayingCar() {
		numberCar++;
	}
	void display() {
		cout<< numberCar << " -" << money << "$" << endl;
	}
};
int main()
{
	Kasa kasa(0, 0);
	int c;
	while (1) {

		c = _getch(); 
			if (c == ' ')
			{
				kasa.nopayingCar();
			}
		if (c == 'e' || c == 'E')
		{
			kasa.payingCar();
		}
		if (c == 'q' || c == 'Q')
			break;
		kasa.display();
	}
	kasa.display();
	system("pause");
	return 0;
}
