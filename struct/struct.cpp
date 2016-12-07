// struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct ksiazki
{
	string nazwa;
	string dostep;
};


int main()
{
	int nr;
	ksiazki ks[3] =
	{
		{"Wiedzmin", "dostepna"},
		{"Harry Potter", "nie dostepna"},
		{"Podstawy c++", "dostepna"}
	};


	cout << "1. Wiedzmin" << endl << "2. Harry Potter" << endl << "3. Podstawy c++" << endl;
	cout << "Wybierz numer ksiazki ktorej chcesz sprawdzic dostepnosc" << endl;
	cin >> nr;
	if ((nr > 3) || (nr < 1))
		cout << "Prosze podac inny numer ksiazki" << endl;
	else cout << "Ksiazka " << ks[nr - 1].nazwa << " jest " << ks[nr - 1].dostep << endl;



	system("pause");
    return 0;
}

