// K06DS01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int sayi[8] = { 1,2,3,4,5,6,7,8 };
	int toplam = 0;
	for (int i = 0; i < 8; i++) {
		toplam += sayi[i];
	}
	cout << "toplam: " << toplam << endl;
	system("PAUSE");
    return 0;
}

