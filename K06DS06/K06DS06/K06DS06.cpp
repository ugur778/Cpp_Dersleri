// K06DS06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int a[2][2], b[2][2], c[2][2];
	//A MATRISI ALINIYOR
	int i, j;
	cout << "matrisler icin sayi giriniz: \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "A [" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	cout << endl << endl;
	//B MATRISI ALINIYOR
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "B [" << i << "][" << j << "]: ";
			cin >> b[i][j];
		}
	}
	cout << endl << endl;
	//MANTIKSAL ISLEM YAPILIYOR
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	//CIKTI YAZDIRILIYOR
	cout << "SONUCLAR YAZDIRILIYOR: \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "C MATRISI [" << i << "][" << j << "]: " << c[i][j] << endl;
		}
	}
	system("PAUSE");
    return 0;
}

