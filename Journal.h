#pragma once
#include <iostream>
#include <string>
#include "Edition.h"

using namespace std;


class Journal :public Edition
{
	int Journal_Nomber;
public:

	//������������
	
	Journal();
	Journal(int nomber);
	Journal(const Journal& other);

	//������� � �������

	int Get_Journal_Nomber()const;
	void Set_Journal_Nomber(int nomber);

	//�������

	void Print()override;    //������ ������������

	//���������� ����������

	Journal& operator =(const Journal& other);
	
};

