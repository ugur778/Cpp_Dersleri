// K07DS03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int ebob(int sayi1, int sayi2) {
	if (sayi1 > sayi2)
		return sayi1;
	else
		return sayi2;
}
int main(){

	int sayi1, sayi2;
	cout << "sayi1 gir: ";
	cin >> sayi1;
	cout << "sayir2 gir: ";
	cin >> sayi2;

	int sayi = ebob(sayi1, sayi2);
	int s_ebob;
	for (int i = sayi; i > 0; i--) {
		if ((sayi1%i == 0) && (sayi2%i == 0)) {
			s_ebob = i;
			break;
		}
	}
	cout << "ebob: " << s_ebob << endl;
	int s_ekok = (sayi1*sayi2) / s_ebob;
	cout << "ekok: " << s_ekok << endl;
	system("pause");
	return 0;
}	