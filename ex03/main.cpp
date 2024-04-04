#include <iostream>
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap *trap = new DiamondTrap("Clappy");
	trap->attack("aaa");
	trap->whoAmI();
	ClapTrap *tt = trap;
	delete tt;
	return 0;
}