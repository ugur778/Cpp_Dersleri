// K06DS04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char ad [10];
	cout << "isim giriniz: ";
	gets_s(ad);
	cout << "girdiginiz isim: ";
	puts(ad);
	system("PAUSE");
    return 0;
}

