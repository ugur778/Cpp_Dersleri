// K07O08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int usalma(int, int);

int main(){
	int a, b;
	cout << "taban: ";
	cin >> a;
	cout << "us: ";
	cin >> b;
	cout << a << "^" << b << "=" << usalma(a, b) << endl;
	system("PAUSE");
    return 0;
}

int usalma(int x, int y) {
	int t = 1;
	for (int i = 1; i <= y; i++) {
		t = t*x;
	}
	return t;

}

