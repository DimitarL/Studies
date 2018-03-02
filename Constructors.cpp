// ConsoleApplication35.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#pragma warning(disable:4996)

class Student
{
public:
	int fn;
	char name[15];
public:
	Student()
	{
		std::cout << "Student constructor! \n";
	}
	Student(int fn)
	{
		this->SetFn(fn);
		std::cout << "Constructor with fn! \n";
	}
	int GetFn()
	{
		return fn;
	}
	void SetFn(int fn)
	{
		if (fn <= 0)
		{
			std::cout << "Invalid fn!";
			this->fn = 1;
			return;
		}
		this->fn = fn;
	}

	void SetName(char name[])
	{
		if (strlen(name) > 15)
		{
			std::cout << "The name is too long!\n";
			return;
		}
		strcpy(this->name, name);
	}
	char* GetName()
	{
		return this->name;
	}
};

int main()
{
	Student s1;
	//s1.SetFn(40000);
	//	std::cout << s1.GetFn();
	s1.SetName("Pesho");
	std::cout << s1.GetName();
	Student s2;
	s2.SetFn(20000);

	return 0;
}

