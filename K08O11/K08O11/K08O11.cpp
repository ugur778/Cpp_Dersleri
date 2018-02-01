// K08O11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){

	int x;
	char y;
	float z;
	double t;

	cout << "Tamsayi: " << sizeof(int) << "byte\n";
	cout << "Karakter: " << sizeof y << "byte\n";
	cout << "Reel Sayi: " << sizeof(float) << "byte\n";
	cout << "Cift Duyarlikli Reel Sayi: " << sizeof t << "byte\n";
	system("pause");
    return 0;
}

