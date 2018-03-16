#pragma once
#include "Class.h"

class Student
{
private:
	int fn;
	char name[15];
	int gradesNumber;
	Grade *grades;

public:
	void SetFn(int fn);
	int GetFn() const;
	void SetName(char* name);
	const char* GetName() const;


};