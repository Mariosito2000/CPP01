#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "Vamoh a ver que pasa aqui.\n";
}

void	Harl::info( void )
{
	std::cout << "Que has dicho de mi madre?\n";
}

void	Harl::warning( void )
{
	std::cout << "Te advierto, te estas calentado.\n";
}

void	Harl::error( void )
{
	std::cout << "Te fostio vivo eh.\n";
}

void	Harl::complain( std::string level )
{
	void	(Harl::*complain_lvls[4])(void) = {(&Harl::debug), (&Harl::info), (&Harl::warning), (&Harl::error)};
	std::string	lvl[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (lvl[i] == level)
			(this->*complain_lvls[i])();
}
