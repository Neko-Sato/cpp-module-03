/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:22:13 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 19:40:50 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include <string>

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 protected:
  bool _gatekeeper_mode;

 public:
  static const unsigned int default_hit_points = 100;
  static const unsigned int default_energy_points = 50;
  static const unsigned int default_attack_damage = 20;

  ScavTrap(std::string name = "");
  virtual ~ScavTrap(void);
  ScavTrap(const ScavTrap& other);
  virtual ScavTrap& operator=(const ScavTrap& other);

  virtual void attack(const std::string& target);
  void guardGate(void);
};

#endif
