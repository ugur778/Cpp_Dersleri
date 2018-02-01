// K08O02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int a, *ptr;
	cout << "bir sayi girin: ";
	cin >> a;
	ptr = &a;
	cout << endl;
	cout << *ptr << " sayisi bellekte " << ptr << " adresine yerlesti." << endl;
	system("pause");
    return 0;
}

