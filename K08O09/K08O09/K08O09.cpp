// K08O09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int sayi = 8;
	char harf = 'c';
	void *deger;

	deger = &sayi;
	cout << "Sayi: " << *(int*)deger << endl;

	deger = &harf;
	cout << "harf: " << *(char*)deger << endl;
	system("pause");
    return 0;
}

