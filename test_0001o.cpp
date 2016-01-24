#include <iostream>

using namespace std;

int main()
{

	for (int i = 0; i < 1; i++)
	{
		std::cout << "    #" << std::endl;

			for (int i = 0; i < 1; i++)
			{
				std::cout << "   ###" << std::endl;

					for (int i = 0; i < 1; i++)
					{
						std::cout << "  #####" << std::endl;

							for (int i = 0; i < 1; i++)
							{
								std::cout << " #######" << std::endl;
								/* Result ->
                #
               ###
              #####
             #######
								*/
							}
					}
 			}
	}
}
