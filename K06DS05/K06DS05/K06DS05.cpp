// K06DS05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char kelime[10];
	int i = 0;
	cout<<"kelime girin: ";
	gets_s(kelime);
	i = strlen(kelime);
	cout << "girdiginiz kelimenin tersi: ";
	for (; i >= 0; i--) {
		cout<< kelime[i];
	}
	cout << endl;
	system("PAUSE");
    return 0;
}