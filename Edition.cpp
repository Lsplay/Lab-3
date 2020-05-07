#include "Edition.h"


using namespace std;

//������������

Edition::Edition()
{
	Year = 0;
	Edition_Name = { "Not specified" };
}
Edition::Edition(int year, string Name)
{
	if (year < 0)
	{
		while (year < 0)
		{
			cout << "EROR Wrong Year Include another - ";
			cin >> year;
		}
	}
	Year = year;
	Edition_Name = Name;
}
Edition::Edition(const Edition& other)
{
	this->Year = other.Year;
	this->Edition_Name= other.Edition_Name;
}

//������� � �������

int Edition::Get_Edition_Year()
{
	return Year;
}
string Edition::Get_Edition_Name()
{
	return Edition_Name;
}
void Edition::Set_Edition_Year(int year)
{
	if (year < 0)
	{
		while (year < 0)
		{
			cout << "EROR Wrong Year Include another - ";
			cin >> year;
		}
	}
	Year = year;
}
void Edition::Set_Edition_Name(string Name)
{
	Edition_Name = Name;
}

//�������

void Edition::Print()
{
	cout << " The Edition - "<<Edition_Name  << " was written at  " << Year << " year";
}

//������������ ���������

Edition& Edition::operator =(const Edition& other)
{
	this->Edition_Name = other.Edition_Name;
	this->Year = other.Year;
	return *this;
}