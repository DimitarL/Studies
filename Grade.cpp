#include "Class.h"
#include <iostream>

void Grade::SetGrade(int grade)
{
	if (grade > 1 && grade < 7)
	{
		this-> grade = grade;
	}
	else
	{
		this->grade = 0;
		std::cout << "Invalid grade!" << "\n";
	}
	int Grade::GetGrade()
	{
		return this->grade;
	}

	void Grade::SetSubject(char * subj)
	{
		int index = 0;
		while (subject[index] != '\0' && index < 15)
		{
			this->subject[index] = subj[index];
			index++;
		}
		this->subject[index] = '\0';
	}

	char * Grade::GetSubject()
	{
		return this->subject;
	}

	//Grade::Grade()




	Grade::Grade(int grade = 0, char *subj)
	{
		SetGrade(grade);
		SetSubject(subj);
	}
}
