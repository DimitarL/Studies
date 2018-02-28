// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int* harakiru();

int main()
{
	int *p = harakiru();
	cout << *p;
	delete p;

	return 0;
}

int* harakiru()
{
	int* p = new int;
	*p = 30;
	return p;
}
