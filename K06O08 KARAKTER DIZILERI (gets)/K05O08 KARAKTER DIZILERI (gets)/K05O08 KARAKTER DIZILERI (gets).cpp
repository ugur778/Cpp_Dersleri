// K05O08 KARAKTER DIZILERI (gets).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char ad[10], soyad[20];
	cout << "Ad: ";
	gets_s (ad);

	cout << "\nSoyad: ";
	gets_s (soyad);

	cout << "Ad - Soyad" << endl;

	puts(ad);
	puts(soyad);
	cout << endl;
	system("PAUSE");
    return 0;
}