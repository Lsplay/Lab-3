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

	//Конструкторы

	Book();
	Book(int Pages, string Name);
	Book(const Book& other);

	//Геттеры и сеттеры

	int Get_CountPage () const;
	string Get_Author() const;
	void Set_CountPage(int Pages);
	void Set_Author(string Name);

	//Функции

	void Print()override ;  //Пример полиморфизма

	//Перегрузка операторов

	Book& operator =(const Book& other);
	
};

