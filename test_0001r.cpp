#include <iostream>
#include <vector>
#include <map>
#include <time.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

/*
		Map Power Test !
*/

int main()
{
	srand(time(NULL));
	int x = (rand() % 32) + 1;

	std::map<char, double> v_Map;
	v_Map['a'] = x;

	std::cout << pow(v_Map['a'], v_Map['a']);
	//result pow(rand_x, rand_x)
	//Firtst unit test result(2.56769e+042)
}
