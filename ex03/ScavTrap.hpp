/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:22:13 by hshimizu          #+#    #+#             */
/*   Updated: 2025/01/10 20:14:10 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include <string>

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
private:
  bool _gatekeeper_mode;

public:
  static unsigned int const default_hit_points;
  static unsigned int const default_energy_points;
  static unsigned int const default_attack_damage;

  ScavTrap(std::string const &name = "");
  virtual ~ScavTrap();
  ScavTrap(ScavTrap const &rhs);
  ScavTrap &operator=(ScavTrap const &rhs);

  void attack(const std::string &target);
  void guardGate(void);
};

#endif
