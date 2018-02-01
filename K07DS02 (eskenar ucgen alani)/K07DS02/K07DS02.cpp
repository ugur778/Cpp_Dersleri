// K07DS02.cpp : Defines the entry point for the console application.
//
//formul: h*h*kok3/4

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int alan(int x);

int main(){
	int h;
	cout << "eskenar ucgenin yuksekligini giriniz: ";
	cin >> h;
	alan(h);
	system("pause");
    return 0;
}

int alan(int x) {
	double sonuc = x*x*sqrt(3.0) / 4;
	cout << "ucgenin alani: " << sonuc << endl;
	return sonuc;
}