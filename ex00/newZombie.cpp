#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie *Z = new Zombie;
	Z->name = name;
	return(Z);
}