/*Атрибут first – дробове число, координата точки х на площині;
атрибут second –дробове число, координата точки у на площині. Реалізувати
метод distance() –відстань точки від початку координат.*/

#include "stdafx.h"
#include <iostream>
#include "math.h"

using namespace std;
class Distance {
	double first;
	double second;
public:
	Distance(){
	}
	void read() {
		cin >> first;
		cin >> second;
	}
	double distance() {
		double d = sqrt(pow(first , 2) + pow(second , 2));
		cout << d << endl;
		return d;
	}
	
};
int main()
{
	Distance point1;
	point1.read();
	point1.distance();
	system("pause");

    return 0;
}

