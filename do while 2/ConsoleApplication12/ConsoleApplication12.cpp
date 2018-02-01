// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int sayi, i = 0;
	cout << "bir sayi giriniz: ";
	cin >> sayi;
	do {
		i++;
		cout << i;
	} while (i < sayi);
	cout << endl;
	system("PAUSE");
    return 0;
}

