// K07DS01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int toplam();

int main(){
	cout << "toplam icin sayilari giriniz...\n" <<toplam()<< endl;
	system("pause");
	return 0;
}

int toplam() {
	int sayi[10], toplama=0;
	for (int i = 0; i < 10; i++) {
		cout << i << ". sayiyi giriniz: ";
		cin >> sayi[i];
		toplama += sayi[i];
	}
	return toplama;
}