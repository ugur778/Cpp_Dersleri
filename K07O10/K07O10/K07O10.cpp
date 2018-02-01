// K07O10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int faktoryel(int);

int main(){
	int sayi;
	cout << "faktoreli alinacak sayiyi girin: ";
	cin >> sayi;
	cout << "sayinin faktoryeli: " << faktoryel(sayi) << endl;
	system("PAUSE");
    return 0;
}

int faktoryel(int a) {
	int x;
	if (a > 1)
		x = a*faktoryel(a - 1);
	else
		x = 1;
	return x;
}

