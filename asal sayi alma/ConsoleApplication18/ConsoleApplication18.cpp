// ConsoleApplication18.cpp : asal sayilari alma
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	for (a = 2; a <= 5000; a++) {
		c = 1;
		for (b = 2; b < a; b++) {
			if (a%b == 0) {
				c = 0;
			}
		}
		if (c == 1) {
			cout << "asal sayilar: " << a << endl;
		}
	}
	system("PAUSE");
    return 0;
}

