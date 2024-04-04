/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:58:09 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/05 08:44:35 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"), _name(name)
{
	_hit_points = FragTrap::_default_hit_points;
	_energy_points = ScavTrap::_default_energy_points;
	_attack_damage = FragTrap::_default_attack_damage;
	std::cout << "DiamondTrap create " << _name << std::endl;
	std::cout << _hit_points << ", " << _energy_points << ", " << _attack_damage << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap delete " << _name << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << _name << " say:" << std::endl;
	std::cout << ">> DiamondTrap name is " << _name << "." << std::endl;
	std::cout << ">> ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	return ScavTrap::attack(target);
}