#include <iostream>
#include <list>

using namespace std;

/*
		Application Crash test !
*/

int main()
{
	int a = 4;

	std::list<int> x[-a];
	//result(Application Crash)
}
