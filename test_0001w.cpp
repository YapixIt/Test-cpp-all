#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
		Pointer test !
*/

int main()
{
	srand(time(NULL));
	int a = (rand() % 64) + 1;

	int x[a*=a];
	cout << &x;
	//result(cout << x;) ^^
}
