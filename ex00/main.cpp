#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("Clappy");

	clapTrap.attack("Enemy");
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(5);
	clapTrap.attack("Enemy");
	clapTrap.takeDamage(20);
	clapTrap.beRepaired(10);
	return 0;
}