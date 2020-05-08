#pragma once
#include <iostream>
#include <string>
#include "Edition.h"

using namespace std;


class Journal :public Edition
{
	int Journal_Nomber;
public:

	//Конструкторы
	
	Journal();
	Journal(int nomber);
	Journal(const Journal& other);

	//Геттеры и сеттеры

	int Get_Journal_Nomber()const;
	void Set_Journal_Nomber(int nomber);

	//Функции

	void Print()override;    //Пример полиморфизма

	//Перегрузка операторов

	Journal& operator =(const Journal& other);
	
};

