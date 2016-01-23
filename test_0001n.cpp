#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
	  NONE result test !
*/

int main()
{
	srand(time(NULL));
	int a = (rand() % 1) + 1;

	for(int i = a; i < a - 1; i++)
	{
	cout << "NULL"<< endl;
	//result(NONE)
	}
}
