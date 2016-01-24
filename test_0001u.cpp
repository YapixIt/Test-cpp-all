#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
		Problem with this Algorithm !
*/

int main()
{
	srand(time(NULL));
	int x_0 = (rand() % 999) + 1;

	int r_0, r_1, r_2, r_3, r_4, r_5 = (rand() % 100) + 1;

	int x_2 = x_0 - r_0;

    int t_0 = r_0, t_1 = r_1, t_2 = r_2, t_3 = r_3, t_4 = r_4, t_5 = r_5;

    std::cout << "Number choice ->" << t_0 << ", " << t_1 << ", " << t_3 << ", " << t_4 << ", " << t_5 << " ."<< std::endl;
  //First random result(Number choice ->4285984, -2, 2752248, 4285984, 64)
  }
