// lab 4 OOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class publication {
	
	string name;
	float price;
public:
	void getData() {
		cout << "Write name :  ";
		cin >> name;
		cout << "Write price:  ";
		cin >> price;
	}
	void putData() {
		cout << "name: " << name<<endl;
		cout << "price: " << price << endl;
	}

};
class book : public publication {
	int amount;
public:
	void getData() {
		publication::getData();
		cout << "write ammount  ";
		cin >> amount;
	}
	void putData() {
		publication::putData();
		cout << "Amount :" << amount<<endl;
	}

};
class type :public publication {
	float time;
public:
	void getData() {
		publication::getData();
		cout << "Write time::  ";
		cin >> time;

}
	void putData(){
		
		publication::putData();
		cout << "Time : " << time<<endl;
	}
};
int main()
{
	book objA;
	type objB;
	objA.getData();
	objA.putData();
	objB.getData();
	objB.putData();
	system("pause");
    return 0;
}

