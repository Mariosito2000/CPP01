#pragma once
#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:

	std::string name;
	Weapon		*weapon;

public:

	HumanB( std::string );
	~HumanB();

	void	setWeapon( Weapon & );
	void	attack();

};

#endif