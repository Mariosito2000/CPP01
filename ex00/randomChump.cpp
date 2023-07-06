#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie Z;
	Z.name = name;
	Z.announce();
}