/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:22:13 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/05 08:42:43 by hshimizu         ###   ########.fr       */
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

protected:
	static const unsigned int _default_hit_points = 100;
	static const unsigned int _default_energy_points = 50;
	static const unsigned int _default_attack_damage = 20;

public:
	ScavTrap(std::string name = "");
	virtual ~ScavTrap(void);

	virtual void attack(const std::string &target);
	void guardGate(void);
};

#endif
