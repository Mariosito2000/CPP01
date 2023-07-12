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
		for (int j = i; j < 4; j++)
			(this->*complain_lvls[j])();
		break;
	case 1:
		for (int j = i; j < 4; j++)
			(this->*complain_lvls[j])();
		break;
	case 2:
		for (int j = i; j < 4; j++)
			(this->*complain_lvls[j])();
		break;
	case 3:
		for (int j = i; j < 4; j++)
			(this->*complain_lvls[j])();
		break;
	default:
		std::cout << "[ Me estas haciendo perder el tiempo ]\n";
		break;
	}
}
