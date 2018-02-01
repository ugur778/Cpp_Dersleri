// K05O09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char ad[10], soyad[20];
	cout << "Ad: ";
	gets_s(ad);
	cout << ad << " " << strlen(ad) << " karakter.";

	cout << "\nSoyad: ";
	gets_s(soyad);
	cout << soyad << " " << strlen(soyad) << " karakter.";
	cout << endl;
	strcpy_s(ad, soyad);
	cout << "\nKopyalamadan sonra ad " << strlen(ad) << " karakter.";
	cout << endl;

	system("PAUSE");
    return 0;
}

