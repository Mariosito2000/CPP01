#include "Harl.hpp"

int	main()
{
	Harl	Jarl;
//std::cout << "DEBUG\n";
	Jarl.complain("DEBUG");
//std::cout << "INFO\n";
	Jarl.complain("INFO");
//std::cout << "WARNING\n";
	Jarl.complain("WARNING");
//std::cout << "ERROR\n";
	Jarl.complain("ERROR");
//std::cout << "HOLA\n";
	Jarl.complain("HOLA");
//std::cout << "ADIO\n";
	Jarl.complain("ADIO");
//std::cout << "DEBUG\n";
	Jarl.complain("DEBUG");

	return (0);
}