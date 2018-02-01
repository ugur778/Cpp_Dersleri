// K08O03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int i[5] = { 1,2,3,4,5 };
	int *ptr=i;
	cout << ptr << " adresindeki deger: " << *ptr << endl;
	++ptr;
	cout << ptr << " adresindeki deger: " << *ptr << endl;
	system("pause");
    return 0;
}

