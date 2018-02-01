// deneme 6 2.cpp : for ile girilen sayinin faktoryeli
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int i, faktoryel = 1;
	cout << "bir sayi giriniz" << endl;
	cin >> i;
	for (; i > 1; i--) {
		faktoryel = faktoryel *i;
	}
	cout << faktoryel << endl;
	system("PAUSE");
    return 0;
}

