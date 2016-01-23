#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
		Proportionality coefficient !
*/

int main()
{
	srand(time(NULL));
	int x = (rand() % 50) + 1;

	int up[x];
	int down[x];

    std::cout << up[x] << " " << down[x] << endl;

    if ((up[x] / down[x]) >= 1)
    {
    	int coeff = up[x] / down[x];
		std::cout << "Proportionality coefficient : " << coeff << endl;
    } else if (down[x] > up[x])
    {
		int i_coeff = down[x] / up [x];
		std::cout << "Proportionality coefficient : " << i_coeff << endl;
    } else
    {
		std::cout << "Try again !" << endl;
	}
}

//It does not work at all once but i don't use double value ^^ :p
