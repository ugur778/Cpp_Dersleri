// K07O03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void kare() {
	int x;
	cout << "karesi alinacak sayiyi giriniz: ";
	cin >> x;
	cout << "sayinin karesi: " << x*x << endl;
}
int main(){
	kare();
	system("PAUSE");
    return 0;
}

