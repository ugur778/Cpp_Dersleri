// K06DS03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int sayi[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int carpim = 1;
	for (int i = 0; i < 10; i++) {
		carpim *= sayi[i];
	}
	cout << "carpim sonucu: " << carpim << endl;
	system("PAUSE");
    return 0;
}

