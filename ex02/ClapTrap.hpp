/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 05:51:54 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/04 06:24:12 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <string>

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;

public:
	ClapTrap(
		std::string name = "",
		unsigned int hit_points = 10,
		unsigned int energy_points = 10,
		unsigned int attack_damage = 0);
	~ClapTrap(void);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
