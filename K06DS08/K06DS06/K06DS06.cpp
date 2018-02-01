// K06DS06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	cout << "carpim tablosu: \n";
	for (int i = 1; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			cout << i << "x" << j << "=" << i*j << endl;
		}
		cout << endl << endl;
	}
	system("PAUSE");
    return 0;
}