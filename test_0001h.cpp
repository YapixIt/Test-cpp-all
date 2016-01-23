#include <iostream>
#include <string>

using namespace std;

/*
		Celsius to Kelvin && Kelvin to Celsius !
*/

int main()
{
	string choice;
	double temp_K, temp_C;
	std::cout << "For kelvin to Celsius touch kc, for Celsius to Kelvin touch ck" << endl;
	std::cin >> choice;

	if(choice == "kc" || choice == "Kc" || choice == "kC" || choice == "KC")
	{
		std::cout << "Value to converting :" << endl;
		std::cin >> temp_K;

		double r_K = temp_K - 273.15;

		std::cout << "Value : " << r_K << endl;
		return 0;

	} else if(choice == "ck" || choice == "Ck" || choice == "cK" || choice == "CK")
	{
		std::cout << "Value to converting :" << endl;
		std::cin >> temp_K;

		double r_K = temp_K + 273.15;

		std::cout << "Value : " << r_K << endl;
		return 0;

	} else
	{
		std::cout << "Try again" << endl;
		return 0;
	}
}
