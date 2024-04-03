/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:22:13 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/04 06:21:38 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
private:
	bool _gatekeeper_mode;

public:
	ScavTrap(
		std::string name = "",
		unsigned int hit_points = 100,
		unsigned int energy_points = 50,
		unsigned int attack_damage = 20);
	~ScavTrap(void);

	void guardGate(void);
};

#endif
