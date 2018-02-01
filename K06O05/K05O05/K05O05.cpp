// K05O05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int toplam = 0;
	int sayi[3] = { 2,2,1 };

	for (int i = 0; i < 3; i++) {
		toplam += sayi[i];
	}
	cout << "toplam: " << toplam << endl;
	system("PAUSE");
    return 0;
}

