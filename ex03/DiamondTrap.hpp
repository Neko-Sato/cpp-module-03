/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:53:42 by hshimizu          #+#    #+#             */
/*   Updated: 2025/01/10 20:15:21 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
  std::string _name;

public:
  using FragTrap::default_attack_damage;
  using FragTrap::default_hit_points;
  using ScavTrap::default_energy_points;

  DiamondTrap(std::string const &name = "");
  ~DiamondTrap();

  DiamondTrap(DiamondTrap const &rhs);
  DiamondTrap &operator=(DiamondTrap const &rhs);

  void whoAmI(void);
  using ScavTrap::attack;
};

#endif
