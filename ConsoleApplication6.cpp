// Console1Application6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
using namespace std;

int main()
{
	int temp = 1;
	int quotient = 0;
	int de = 4;
	int nu = 21;
	while (de <= nu) {
		de <<= 1;
		temp <<= 1;
	}
	cout << temp<<endl;
	cout << de<<endl;

	while (temp > 1) {
		de >>= 1;
		temp >>= 1;

		if (nu >= de) {
			nu -= de;
			//printf("%d %d\n",quotient,temp);
			quotient += temp;
		}
	}
	cout << quotient;
    return 0;
}

