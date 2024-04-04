/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:02:45 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/05 08:44:02 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = _default_hit_points;
	_energy_points = _default_energy_points;
	_attack_damage = _default_attack_damage;
	std::cout << "FragTrap create " << _name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap delete " << _name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " say:" << std::endl;
	std::cout << ">> Would you like to high-five me?" << std::endl;
}
