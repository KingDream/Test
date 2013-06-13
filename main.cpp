#include "stdafx.h"

int main(int argc, char ** argv)
{
	std::cout << argc << std::endl;

	for(int i = 0; i < argc; ++i)
	{
		std::cout << argv[i] << std::endl;
	}

	//system("pause");

	return 0;
}