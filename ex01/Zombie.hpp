#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	
	std::string	name;

public:

	static Zombie* zombieHorde( int N, std::string name );

	Zombie();
	~Zombie();

	void	announce();
	void	setName( std::string name );

};

#endif