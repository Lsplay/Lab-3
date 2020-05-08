#include "Journal.h"

using namespace std;


//Конструкторы

Journal::Journal()
{
	Journal_Nomber = 0;
}
Journal::Journal(int nomber)
{
	Journal_Nomber= nomber;
}
Journal::Journal(const Journal& other)
{
	this->Journal_Nomber = other.Journal_Nomber;
}

//Геттеры и сеттеры

int Journal::Get_Journal_Nomber()const
{
	return Journal_Nomber;
}
void Journal::Set_Journal_Nomber(int nomber)
{
	Journal_Nomber = nomber;
}

//Функции

void Journal::Print()
{
	Edition::Print();
	cout << "And have " << Journal_Nomber << " Journal nomber" << endl;
}


//Перегрузки операторов

Journal& Journal::operator =(const Journal& other)
{
	this->Journal_Nomber = other.Journal_Nomber;
	return *this;
}

