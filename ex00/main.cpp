#include "Zombie.hpp"

int	main()
{
	Zombie	*pop;
	for (int i = 0; i < 5; i++)
	{
		pop = Zombie::newZombie("Manu");
		pop->announce();
		delete (pop);
	}
	Zombie::randomChump("Josue");
}