#include "Zombie.hpp"

int	main()
{
	Zombie	*pop;
	int		N = 3;
	pop = Zombie::zombieHorde(N, "Manolo");
	for (int i = 0; i < N; i++)
		pop[i].announce();
	delete[] pop;
}