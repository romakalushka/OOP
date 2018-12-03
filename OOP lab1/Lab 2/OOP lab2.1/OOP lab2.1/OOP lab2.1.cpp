// 
/*Реалізувати один простий клас згідно варіанту індивідуального завдання, що містить
закриті данні, а саме два типа даних : числове та рядкове, реалізоване через покажчик на char.
Потрібно створити декілька екземплярів класу статично і динамічно, а також масив та
продемонструвати дію всіх конструкторів і методів.Реалізувати методи :
 Scan - ввід даних з клавіатури у поля класу;
 Print - констатний метод виводу даних на екран;
 Конструктор по замовчуванню;
 Конструктор ініціалізації Клас(сhar*, int);
 Конструктор копіювання Клас(const Клас&);
 Деструктор
 Методи доступу та закритих данних Get та Set.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
class Computer
{
	char *Owner = new char[40];
	int Processor;
public:
	
	Computer(char * owner, int procesor) { Owner = owner; Processor = procesor; };
	Computer() :Computer((char*)("other"), 0) {};
	Computer& operator=(const Computer& Computer);
	
	
	
	
	
	~Computer() { cout << "delete" << endl; }
	void SetOwner(const char*owner) {
		Owner = new char[40];
		for (int i = 0; i < 40; i++) 
			Owner[i]=owner[i];
		}
	char*GetOwner() {return Owner;}
	void SetProcessor (int n) {Processor=n;}
	int GetProcessor() {return Processor;}
	void Input() {
		cout << "Click Processor" << endl;
		cin >> Processor;
		cout << "Click Owner" << endl;
		char *str = new char[40];
		cin >> str;
		SetOwner(str);
		cout << endl;
	}
	void Print()
	  {
		cout << "Processor  " << Processor << endl;
		cout << "Owner  " << Owner << endl;
      }
}; 
int main()
{
	Computer PcOne;
	Computer PcTwo((char*)"Intel",7);
	Computer *PcThree= new Computer;
	Computer *PcFour=new Computer((char*)"AMD",34);
	//PcOne.Input();
	//PcTwo.Input();
	//PcThree->Input();
	//PcFour->Input();

	PcOne.Print();
	PcTwo.Print();
	PcThree->Print();
	PcFour->Print();
	system("pause");

    return 0;
}

