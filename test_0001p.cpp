#include <iostream>

using namespace std;
//This is not at all optimised ^^
int main()
{
	for (int i = 0; i < 1; i++)
	{
		std::cout << "|_";
		std::cout << "|   ";
		std::cout << "|";
		std::cout << "_|" << std::endl << std::endl;

        std::cout << "      \__/";
        //Backshash is not print;
        
        /* result ->
                                    |_|   |_|
                                    
                                          __/
        
        */

	}
}
