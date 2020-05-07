#include <iostream>
#include <string>
#include "Edition.h"
#include "Book.h"
#include "Newspaper.h"
#include "Journal.h"

using namespace std;

void BookFun()
{
	int x, y=0;
	int b, d;
	string a, c;
	Book Voina;
	
	while (y == 0)
	{
		cout << "Click 1 to set book parametrs \nClick 2 to print book parametrs  \n " << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			cout << "Include Author | CountPage | Edition name | Edition Year" << endl;

			cin >> a; cin >> b; cin >> c;cin >> d;

			Voina.Set_Author(a); Voina.Set_CountPage(b); Voina.Set_Edition_Name(c); Voina.Set_Edition_Year(d);

			break;
		case 2:

			Voina.Print();

			break;
		default:
			cout << "EROR - Wrong number " << endl;;
			break;
		}
		cout << " Include 0 to Continue And Any Bottom to end work with this Class " << endl;
		cin >> y;
	}
};

void NewspaperFun()
{
	int x, y = 0;
	int b;
	string a, c;
	bool d;
	Newspaper Klass;
	
	while (y == 0)
	{
		cout << "Click 1 to set Newspaper parametrs \nClick 2 to print Newspaper parametrs  \n " << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			cout << "Include Format | Chromaticity(1-colory 0-white-black) | Edition name | Edition Year" << endl;

			cin >> a; cin >> d; cin >> c; cin >> b;

			Klass.Set_Newspaper_Format(a); Klass.Set_Newspaper_Chromaticity(d); Klass.Set_Edition_Name(c); Klass.Set_Edition_Year(b);

			break;
		case 2:

			Klass.Print();

			break;
		default:
			cout << "EROR - Wrong number " << endl;;
			break;
		}
		cout << " Include 0 to Continue And Any Bottom to end work with this Class " << endl;
		cin >> y;
	}
};

void JournalFun()
{
	int x, y = 0;
	int a, d;
	string  c;
	Journal Strela;
	
	while (y == 0)
	{
		cout << "Click 1 to set Journak parametrs \nClick 2 to print Journal parametrs  \n " << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			cout << "Include Journal_Nomber | Edition name | Edition Year" << endl;

			cin >> a; cin >> c; cin >> d;

			Strela.Set_Journal_Nomber(a); Strela.Set_Edition_Name(c); Strela.Set_Edition_Year(d);

			break;
		case 2:

			Strela.Print();

			break;
		default:
			cout << "EROR - Wrong number " << endl;;
			break;
		}
		cout << " Include 0 to Continue And Any Bottom to end work with this Class " << endl;
		cin >> y;
	}

};

int main()
{
	int x,y=0;
	
	while (y == 0)
	{
		cout << "Include 1 to choose Book \nInclude 2 to choose Newspaper\nInclude 3 to choose Journal" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			BookFun();
			break;
		case 2:
			NewspaperFun();
			break;
		case 3:
			JournalFun();
			break;
		default:
			cout << "EROR - Wrong number " << endl;;
			break;
		}
		cout << "Include 0 to Continue"<<endl;
		cin >> y;
	}
}