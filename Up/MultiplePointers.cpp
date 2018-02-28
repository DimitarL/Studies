// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

void swap(int*, int*);

int main()
{
	int c = 0;
	int d = 5;
	swap(&c, &d);

	cout << c << "    " << d;

    return 0;
}

void swap(int* a, int* b)
{
	*a =*a+ *b;
	*b = *a - *b;
	*a = *a - *b;
}
