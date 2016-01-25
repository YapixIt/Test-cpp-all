#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
		Maths sample it expression test !
*/

int main()
{
	srand(time(NULL));
	int intX = (rand() % 32) + 1;
	int intY = (rand() % 64) + 1;

	int v = intX += intY ^ intY;
	cout << -v;
	//result(-v = randX += randY ^ randY);
}
