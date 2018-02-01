// K07O02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int enbuyuk(int, int, int);

int main(){
	int x, y, z;
	cout << "Uc sayi giriniz: \n";
	cin >> x >> y >> z;
	cout << "sayilarin en buyugu: " << enbuyuk(x, y, z) << endl;

	system("PAUSE");
    return 0;
}

int enbuyuk(int a, int b, int c) {
	int enb;
	if (a > b)
		enb = a;
	else if (a < b)
		enb = b;
	if (enb < c)
		enb = c;
	return enb;
}

