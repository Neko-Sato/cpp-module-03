/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:01:41 by hshimizu          #+#    #+#             */
/*   Updated: 2025/01/10 20:14:10 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include <string>

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
  static unsigned int const default_hit_points;
  static unsigned int const default_energy_points;
  static unsigned int const default_attack_damage;

  FragTrap(std::string const &name = "");
  virtual ~FragTrap();
  FragTrap(FragTrap const &rhs);
  FragTrap &operator=(FragTrap const &rhs);

  void highFivesGuys(void);
};

#endif
