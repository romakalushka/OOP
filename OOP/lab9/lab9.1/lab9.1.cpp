// lab9.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;
#include <process.h> //for exit()
const int LIMIT = 100; //array size
					   ////////////////////////////////////////////////////////////////
class safearay
{
private:
	int arr[LIMIT];
public:
	int& operator [](int n)
	{
		if (n< 0 || n >= LIMIT)
		{
			cout << "\nIndex out of bounds"; exit(1);
		}
		return arr[n];
	}
};
////////////////////////////////////////////////////////////////
int main()
{
	safearay sa1;
	for (int j = 0; j<LIMIT; j++)
		sa1[j] = j * 10; //*left* side of equal sign
	for (int j = 0; j<LIMIT; j++) //display elements
	{
		int temp = sa1[j]; //*right* side of equal sign
		cout << "Element " << j << " is " << temp << endl;
	}
	system("pause");

	return 0;
}