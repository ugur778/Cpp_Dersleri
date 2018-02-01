// faktoryel alma.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i, fakt = 1;
	cout << "Faktoryeli alinacak sayiyi girin: ";
	cin >> i;

	for (; i > 1; i--) {
		fakt *= i;
	}
	cout << fakt << endl;
	system("PAUSE");
    return 0;
}