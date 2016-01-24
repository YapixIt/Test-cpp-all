#include <iostream>

using namespace std;

/*
		Application Crash test !
*/

int main()
{
	int a = 4;

	int x[-a];
	cout << &x;
	//For all integer >= 5(Application crash) ^^
}
