

#include "stdafx.h"
#include <iostream>
using namespace std;
class Quadrangle {
protected:
	double a, b;
public:
	Quadrangle() {}
	~Quadrangle() {}
	void inPut() {
		cout << "write a:  ";
		cin >> a;
		cout << "write b:  ";
		cin >> b;
	}
	double operation() {
	
		double c;
		c = a * b;
		return c;
	
	}
	void outPut() {
		cout << "A= " << a << endl;
		cout << "B=  " << b << endl;
		cout << "Sum =  " << operation() << endl;
		}


};
class Trapeze :public Quadrangle{
	double h;
public:
	Trapeze() {};
	~Trapeze() {};
	void inPut() { Quadrangle::inPut();
	cout << "write h:  ";
	cin >> h;
	}
	double S() {
		double s;
		s = 0.5*(a + b)*h;
		return s;
	}
	void outPut(){
		Quadrangle::outPut();
		cout << "H=  " << h <<endl;
		cout << S() << endl;

	}

};

int main()
{
	Trapeze objA;
	objA.inPut();
	objA.operation();
	objA.outPut();
	system("pause");
    return 0;
}

