// K07O07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void ekranayaz(int);

int main(){
	int i;
	cout << "sayi girin";
	cin >> i;
	ekranayaz(i);
	system("PAUSE");
    return 0;
}

void ekranayaz(int x) {
	cout << "fonksiyona parametre olarak verilen deger: " << x << endl;
}

