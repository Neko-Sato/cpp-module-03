/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:01:41 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/04 06:27:04 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(
		std::string name = "",
		unsigned int hit_points = 100,
		unsigned int energy_points = 100,
		unsigned int attack_damage = 30);
	~FragTrap(void);

	void highFivesGuys(void);
};

#endif
