// K08O05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	char *ptr, isim[20];
	int i = 0;
	cout << "isim girin: ";
	gets_s(isim);
	ptr = isim;
	while (ptr[i] != NULL) {
		cout << ptr[i];
		i++;
	}
	cout << endl;
	system("pause");
    return 0;
}