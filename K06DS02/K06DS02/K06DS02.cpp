// K06DS02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int sayi[2][5];
	int toplam=0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++){
			cout << "sayi [" << i << "][" << j << "] icin sayi girin: ";
			cin>>sayi[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "sayi [" << i << "][" << j << "]: " << sayi[i][j] << endl;
		}
	}
	system("PAUSE");
    return 0;
}

