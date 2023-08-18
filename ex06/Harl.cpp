#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[DEBUG]\nVamoh a ver que pasa aqui.\n\n";
}

void	Harl::info( void )
{
	std::cout << "[INFO]\nQue has dicho de mi madre?\n\n";
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]\nTe lo advierto, te estas calentado.\n\n";
}

void	Harl::error( void )
{
	std::cout << "[ERROR]\nTe fostio vivo eh.\n\n";
}

void	Harl::complain( std::string level )
{
	int	i;
	void	(Harl::*complain_lvls[4])(void) = {(&Harl::debug), (&Harl::info), (&Harl::warning), (&Harl::error)};
	std::string	lvl[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
			break;
	}

	switch (i)
	{
	case 0:
			(this->*complain_lvls[0])();
	case 1:
			(this->*complain_lvls[1])();
	case 2:
			(this->*complain_lvls[2])();
	case 3:
			(this->*complain_lvls[3])();
		break;
	default:
		std::cout << "[ Me estas haciendo perder el tiempo ]\n";
		break;
	}
}
