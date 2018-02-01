// K07DS05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void mukemmel() {
	int sayi, toplam=0;

	for (int i = 1; i < 100; i++) {
		for (int j = 1; j < i; j++) {
			if (i%j == 0)
				toplam += j;
		}
		if (toplam == i)
			cout << "mukemmel sayi: " << i << endl;
		toplam = 0;
	}
}
int main(){
	mukemmel();
	system("pause");
    return 0;
}

