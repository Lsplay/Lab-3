#include "Journal.h"

using namespace std;


//������������

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

//������� � �������

int Journal::Get_Journal_Nomber()const
{
	return Journal_Nomber;
}
void Journal::Set_Journal_Nomber(int nomber)
{
	Journal_Nomber = nomber;
}

//�������

void Journal::Print()
{
	Edition::Print();
	cout << "And have " << Journal_Nomber << " Journal nomber" << endl;
}


//���������� ����������

Journal& Journal::operator =(const Journal& other)
{
	this->Journal_Nomber = other.Journal_Nomber;
	return *this;
}

