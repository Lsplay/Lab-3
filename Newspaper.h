#pragma once
#include <iostream>
#include <string>
#include "Edition.h"

using namespace std;


class Newspaper:public Edition
{
	string Format;
	bool Chromaticity;
public:

	//Конструкторы

	Newspaper();
	Newspaper(string Form, bool Color);
	Newspaper(const Newspaper& other);

	//Геттеры и сеттеры

	string Get_Newspaper_Format()const;
	bool Get_Newspaper_Chromaticity()const;
	void Set_Newspaper_Format(string Form);
	void Set_Newspaper_Chromaticity(bool Color);

	//Функции

	void Print()override;    //Пример полиморфизма

	//Перегрузка операторов

	Newspaper& operator =(const Newspaper& other);
};

