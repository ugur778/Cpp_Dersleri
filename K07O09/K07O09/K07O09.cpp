// K07O09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int faktoryel(int);
int main(){
	int x;
	cout << "bir sayi girin: ";
	cin >> x;
	cout << "girilen sayinin faktoryerli: " << faktoryel(x) << endl;
	system("PAUSE");
    return 0;
}

int faktoryel(int x) {
	int i, fakt = 1;
	for (i = x; i > 0; i--) {
		fakt = fakt*i;
	}
	return fakt;
}

