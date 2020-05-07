#include "Newspaper.h"
#include <iostream>
#include <string>

using namespace std;

//Конструкторы

Newspaper::Newspaper()
{
	Format = { "A4" };
	Chromaticity = 1;

}
Newspaper::Newspaper(string Form, bool Color)
{
	Format = Form;
	Chromaticity = Color;
}
Newspaper::Newspaper(const Newspaper& other)
{
	this->Format = other.Format;
	this->Chromaticity = other.Chromaticity;
}

//Геттеры и сеттеры

string Newspaper::Get_Newspaper_Format()
{
	return Format;
}
bool Newspaper::Get_Newspaper_Chromaticity()
{
	return Chromaticity;
}
void Newspaper::Set_Newspaper_Format(string Form)
{
	Format = Form;
}
void Newspaper::Set_Newspaper_Chromaticity(bool Color)
{
	Chromaticity = Color;
}

//Функции

void Newspaper::Print()
{
	Edition::Print();
	cout << " have " << Format << "Format and have " << Chromaticity << " Chromaticity" << endl;
}

//Перегрузка операторов

Newspaper& Newspaper::operator =(const Newspaper& other)
{
	this->Format = other.Format;
	this->Chromaticity = other.Chromaticity;
	return *this;
}
