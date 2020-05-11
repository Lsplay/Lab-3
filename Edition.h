#pragma once
#include<iostream>
#include<string>

using namespace std;

class Edition
{
	int Year;
	string Edition_Name;

public:

	//Конструкторы

	Edition();
	Edition(int year, string Name);
	Edition(const Edition& other);

	//Геттеры и сеттеры
	
	int Get_Edition_Year()const;
	string Get_Edition_Name()const;
	bool Set_Edition_Year(int year);
	void Set_Edition_Name(string Name);

	//Функции

	virtual void Print() = 0;   //Пример полиморфизма

	//Перегрузка операторов

	Edition& operator =(const Edition& other);

};

