// K05O08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;
int main(){
	int sayi[4][2] = { {1,2},{3,5},{4,2},{1,0} };
	cout << "Dizi elemanlari: \n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "[" << i << "][" << j << "]: ";
			cout << sayi[i][j] << endl;
		}
	}
	system("PAUSE");
    return 0;
}

