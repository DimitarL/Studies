#include "Class.h"
#include<iostream>
//int.main
int main()
{
	/*int b;
	Grade a;
	a.SetGrade(100);
	b = a.GetGrade();
	std::cout << a.GetGrade() << "\n";
	a.SetSubject("DIS");
	std::cout << a.GetSubject() << std::endl;
	*/

	Grade myGrade(6, "OOP");
	Grade anotherGrade; // = Grade()

	Grade Grades


	std::cout << myGrade.GetGrade() << std::endl;
	std::cout << myGrade.GetSubject() << std::endl;
	std::cout << anotherGrade.GetGrade() << std::endl;
	std::cout << anotherGrade.GetSubject() << std::endl;



	return 0;
}