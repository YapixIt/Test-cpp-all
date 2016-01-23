#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
		NULL test !
*/

int main()
{
	srand(time(NULL));
	int a = (rand() % 64) + 1;

	int x[a];

	for (int i; i < a; i++)
	{
		for(int i; i < 3; i++)
		{
			std::cout << x[i] << endl;
			//result(NULL) ;)
		}
	}
}
