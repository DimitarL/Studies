#include "stdafx.h"
#include <iostream>

class Battery
{
	char model[15];
	int hours;
public:
	Battery()
	{
		this->SetModel("No model");
		this->SetHours(0);
	}
	Battery(char mod[], int hours = 0)
	{
		this->SetModel(mod);
		this->SetHours(hours);
	}

	void Print()
	{
		std::cout << GetModel()<<std::endl;
		std::cout << GetHours();
	}

	void SetModel(char mod[])
	{
		int i = 0;
		do
		{

			model[i] = mod[i];
			++i;
		} while (mod[i] != '\0');
		model[i] = '\0';
	}
	char* GetModel()
	{
		return model;
	}
	int GetHours()
	{
		return this->hours;
	}
	void SetHours(int hours)
	{
		this->hours = hours;
	}
};

class Display
{
private:
	double size;
	int colours;

public:
	Display()
	{
		this->SetSize(0);
		this->SetColours(0);
	}
	Display(double size, int colours)
	{
		this->SetSize(13);
		this->SetColours
	}

	void SetSize(double size)
	{
		this->size = size;
	}
	double GetSize()
	{
		return this->size;
	}
public:
	void SetColours(int colour)
	{
		this->colours = colour;
	}
	int GetColours()
	{
		return this->colours;
	}
};

int main()
{
	Battery myBattery("Samsung");
	myBattery.Print;
	Display myDisplay(4.2, 16);
	std::cout << myDisplay.GetSize() << std::endl;
	//myBattery.SetModel("Samsung");

	//std::cout << myBattery.GetModel();

	//myBattery.SetHours(12);
	//std::cout << myBattery.GetHours() << std::endl;


	return 0;
}