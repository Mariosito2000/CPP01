#include "Harl.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	Harl Jarl;
	Jarl.complain(argv[1]);
	return (0);
}