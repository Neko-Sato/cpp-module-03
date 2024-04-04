/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:01:41 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/05 08:44:01 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
protected:
	static const unsigned int _default_hit_points = 100;
	static const unsigned int _default_energy_points = 100;
	static const unsigned int _default_attack_damage = 30;

public:
	FragTrap(std::string name = "");
	virtual ~FragTrap(void);

	void highFivesGuys(void);
};

#endif
