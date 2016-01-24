#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
		Application Crash test !
*/

int main()
{
	srand(time(NULL));
	int a = (rand() % 64) + 1;

	int x[-a];
	cout << x;
	//Application Crash ^^
}
