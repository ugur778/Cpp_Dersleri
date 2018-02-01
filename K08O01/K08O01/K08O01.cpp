// K08O01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int i = 5;
	int *ptr;
	ptr = &i;
	cout << "i'nin adresi: " << &i << endl << "ptr deiskeninin adresi: " << ptr << endl;
	cout << "i'nin degeri: " << i << endl << "*ptr'nin degeri: " << *ptr << endl;
	system("pause");
    return 0;
}

