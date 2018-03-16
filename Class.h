#pragma once
//My header file
class Grade
{
private:
	int grade;
	char subject[16];
public:
	//Grade();
	Grade(int g, char* subj = "asd");
	void SetGrade(int grade);
	int GetGrade() const;

	void SetSubject(char* subj);
	const char* GetSubject() const;

};

