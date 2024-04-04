#include <iostream>
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap("Clappy");
	scavtrap.guardGate();
	scavtrap.attack("AAA");
	scavtrap.guardGate();
	return 0;
}