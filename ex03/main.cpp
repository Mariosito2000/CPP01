#include "classes/Weapon.hpp"
#include "classes/HumanA.hpp"
#include "classes/HumanB.hpp"

/* void	leaks()
{
	system("leaks -q Peace_was_never_an_option");
} */

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();

		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		//jim.attack();
		jim.setWeapon(club);
		jim.attack();

		club.setType("some other type of club");
		jim.attack();
	}
/* 	leaks(); */
	return 0;
}