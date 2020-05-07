#pragma once
#include<iostream>
#include<string>

using namespace std;

class Edition
{
	int Year;
	string Edition_Name;

public:

	//������������

	Edition();
	Edition(int year, string Name);
	Edition(const Edition& other);

	//������� � �������
	
	int Get_Edition_Year();
	string Get_Edition_Name();
	void Set_Edition_Year(int year);
	void Set_Edition_Name(string Name);

	//�������

	virtual void Print() = 0;   //������ ������������

	//���������� ����������

	Edition& operator =(const Edition& other);

};

