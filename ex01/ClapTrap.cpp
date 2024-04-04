/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 05:51:58 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/04 06:45:08 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name),
									   _hit_points(10),
									   _energy_points(10),
									   _attack_damage(0)

{
	std::cout << "ClapTrap create " << _name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap delete " << _name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << " ";
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

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " ";
	if (!_hit_points)
		std::cout << "already dead...";
	else
	{
		std::cout << "takes " << amount << " damage";
		if (amount < _hit_points)
		{
			std::cout << ".";
			_hit_points -= amount;
		}
		else
		{
			std::cout << ", and died...";
			_hit_points = 0;
		}
	}
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " ";
	if (!_hit_points)
		std::cout << "already dead...";
	else if (!_energy_points)
		std::cout << "no more energy points...";
	else
	{
		std::cout << "repaired " << amount << " of hit points!";
		_hit_points += amount;
	}
	std::cout << std::endl;
}
