/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:45:22 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/05 06:38:55 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _gatekeeper_mode(false)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap create " << _name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap delete " << _name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << _name << " ";
	if (!_hit_points)
		std::cout << "already dead...";
	else if (!_energy_points)
		std::cout << "no more energy points...";
	else
	{
		std::cout << "attacks " << target << ", ";
		std::cout << "causing " << _attack_damage << " points of damage!";
		_energy_points--;
	}
	std::cout << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " ";
	if (_gatekeeper_mode)
		std::cout << "already in gatekeeper mode.";
	else
		std::cout << "went into gatekeeper mode.";
	_gatekeeper_mode = true;
	std::cout << std::endl;
}
