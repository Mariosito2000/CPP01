#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:

	std::string	type;

public:

	Weapon( std::string );
	Weapon();
	~Weapon();

	const	std::string &getType();
	void	setType( std::string );

};

#endif