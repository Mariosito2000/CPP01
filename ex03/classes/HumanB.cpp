#include "HumanB.hpp"

HumanB::HumanB( std::string name)
{
	this->name = name;
	this->weapon = 0;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (weapon)
		std::cout << this->name << " attacks with their " << (*weapon).getType() << "\n";
	else
		std::cout << this->name << " attacks with their bare hands\n";
}