#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
		For infinite generator test !
*/

int main()
{
	srand(time(NULL));
	int a = (rand() % 1) + 1;

	for(int i = a; i < a + 1; i--)
	{
	  cout << "Infinite generator in a for expression !"<< endl;
	//"for" infinite generator expression
	}
}
