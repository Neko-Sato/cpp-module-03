/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:45:22 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/04 06:23:45 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(
	std::string name,
	unsigned int hit_points,
	unsigned int energy_points,
	unsigned int attack_damage) : ClapTrap(name, hit_points, energy_points, attack_damage),
								  _gatekeeper_mode(false)
{
	std::cout << "ScavTrap create " << _name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap delete " << _name << std::endl;
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
