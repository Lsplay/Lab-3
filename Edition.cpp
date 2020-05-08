#include "Edition.h"


using namespace std;

//Конструкторы

Edition::Edition()
{
	Year = 0;
	Edition_Name = { "Not specified" };
}
Edition::Edition(int year, string Name)
{
	
	Year = year;
	Edition_Name = Name;
}
Edition::Edition(const Edition& other)
{
	this->Year = other.Year;
	this->Edition_Name= other.Edition_Name;
}

//Геттеры и сеттеры

int Edition::Get_Edition_Year()const
{
	return Year;
}
string Edition::Get_Edition_Name()const
{
	return Edition_Name;
}
void Edition::Set_Edition_Year(int year)
{
	
	Year = year;
}
void Edition::Set_Edition_Name(string Name)
{
	Edition_Name = Name;
}

//Функции

void Edition::Print()
{
	cout << " The Edition - "<<Edition_Name  << " was written at  " << Year << " year";
}

//Перегруженые операторы

Edition& Edition::operator =(const Edition& other)
{
	this->Edition_Name = other.Edition_Name;
	this->Year = other.Year;
	return *this;
}