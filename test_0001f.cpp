#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int x_0 = (rand() % 64) + 1;
	vector<int> x_v[x_0][x_0][x_0];
	for (int k = 0; k < 3; k++)
	{
		for (int k = 0; k < 2; k++)
		{
			for (int k = 0; k < 1; k++)
			{
				cout << x_v;
				//Aleatory result ^^ in Hexadecimal ! ;)
			}
		}
	}
}
