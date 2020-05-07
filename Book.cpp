#include "Book.h"
#include "Edition.h"

//������������

Book::Book()
{
	CountPage = 0;
	Author = { "Not specified" };
}
Book::Book(int Pages, string Name)
{
	if (Pages < 0)
	{
		while (Pages < 0)
		{
			cout << "EROR Wrong CountPage Include another - ";
			cin >> Pages;
		}
	}
	CountPage = Pages;
	Author = Name;
}
Book::Book(const Book& other)
{
	this->CountPage = other.CountPage;
	this->Author = other.Author;
}

//������ � ������� 

int Book::Get_CountPage()
{
	return CountPage;
}
string Book::Get_Author()
{
	return Author;
}
void Book::Set_CountPage(int Pages)
{
	if (Pages < 0)
	{
		while (Pages < 0)
		{
			cout << "EROR Wrong CountPage Include another - ";
			cin >> Pages;
		}
	}
	CountPage = Pages;
}
void Book::Set_Author(string Name)
{
	Author = Name;
}

//�������

void Book::Print() 
{
	Edition::Print();
	cout << " The author of this book " << Author << " and This Book have " << CountPage << " Pages" << endl;
	
}

//������������� ���������

Book& Book::operator =(const Book& other)
{
	this->Author = other.Author;
	this->CountPage = other.CountPage;
	return *this;
}