// K08O07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int  referans(int *x) {
	*x = 20;
	cout << "deger ile cagirma" << endl;
	return 0;
}

int main(){
	int a = 10;
	cout << "degiskenin ilk degeri: " << a << endl;
	referans(&a);
	cout << "degiskenin yeni degeri: " << a << endl;
	system("pause");
    return 0;
}

