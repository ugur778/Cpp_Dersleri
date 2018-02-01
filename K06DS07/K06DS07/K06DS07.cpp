// K06DS07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int i, fibo[15];
	fibo[0] = 0;
	fibo[1] = 1;
	for (i = 0; i < 15; i++) {
		fibo[i + 2] = fibo[i + 1] + fibo[i];
		cout << "fibolacci: " << i <<"  "<< fibo[i] << endl;
	}
	system("PAUSE");
    return 0;
}