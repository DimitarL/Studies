// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

//int subtract(int a, int b) { return a - b; }
v
int main()
{
	int a = 20;
	int *pa = &a;
	int **ppa = &pa;
	//cout << subtract(5, 4);
	*pa = 21;
	cout << *pa<<' '<<**ppa ;
	//(*ppa) = pa
	//*(*ppa) = *pa = **ppa
	cout << endl;
    return 0;
}

