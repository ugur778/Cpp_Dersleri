// K07O06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void degerile(int y) {
	y = 9;
	cout << "deger ile cagirma!!" << endl;
}
int main(){
	int a = 5;
	cout << "degiskenin ilk degeri: " << a << endl;
	degerile(a);
	cout << "deger ile cagirildiktan sonraki degeri: " << a << endl;
	system("PAUSE");
    return 0;
}

