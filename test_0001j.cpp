#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
		Sorting algorithm (not finish) !
*/

int main()
{
	std::vector<std::string> x;
	x.push_back("float");
	x.push_back("set");
	x.push_back("butcher");
	x.push_back("island");

	//21 char

	for (int i = 0; i < 4; i++)
	{
			cout << x[i].size();
			//result(5376) ^^
	}
}
