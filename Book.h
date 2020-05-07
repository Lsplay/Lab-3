#pragma once
#include <iostream>
#include <string>
#include "Edition.h"

using namespace std;

class Book:public Edition
{
	int CountPage;
	string Author;
public:

	//������������

	Book();
	Book(int Pages, string Name);
	Book(const Book& other);

	//������� � �������

	int Get_CountPage();
	string Get_Author();
	void Set_CountPage(int Pages);
	void Set_Author(string Name);

	//�������

	void Print()override;  //������ ������������

	//���������� ����������

	Book& operator =(const Book& other);
	
};

