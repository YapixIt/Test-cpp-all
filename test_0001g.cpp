#include <iostream>
//Don't with cmath ^^
using namespace std;

/*
		Theorem of Pythagore.
*/

int main()
{
	double tr_li_si, tr_lo_si; //triangle little side, triangle long side

	std::cout << "Compute of the hypotenuse !" << endl;

	std::cout << "Value of the first side (in cm):" << endl;
	std::cin >> tr_li_si;

	std::cout << "Value of the second side (in cm):" << endl;
	std::cin >> tr_lo_si;

	double tr_hy_si = (tr_li_si * tr_li_si) + (tr_lo_si * tr_lo_si);
	std::cout << "Hypotenuse : " << tr_hy_si << endl;
}
