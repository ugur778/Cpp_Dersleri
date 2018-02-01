// K05O10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	char ad[10], soyad[20];
	cout << "Ad: ";
	gets_s(ad);
	
	cout << "Soyad: ";
	gets_s(soyad);

	strcat_s(ad, soyad);
	cout << "\nAd Soyad: ";
	puts(ad);
	cout << endl;

	system("PAUSE");
    return 0;
}

