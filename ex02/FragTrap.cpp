/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:02:45 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/04 06:27:50 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(
	std::string name,
	unsigned int hit_points,
	unsigned int energy_points,
	unsigned int attack_damage) : ClapTrap(name, hit_points, energy_points, attack_damage)
{
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
