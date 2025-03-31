/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:58:09 by hshimizu          #+#    #+#             */
/*   Updated: 2025/03/31 21:55:04 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(std::string const &name)
    : ClapTrap(name + "_clap_trap", default_hit_points, default_energy_points,
               default_attack_damage),
      _name(name) {
  std::cout << "DiamondTrap default constructor called " << _name << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap deconstructor called " << _name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs)
    : ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs), _name(rhs._name) {
  std::cout << "DiamondTrap copy constructor called " << _name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {
  std::cout << "DiamondTrap assignation operator called " << _name << std::endl;
  if (&typeid(DiamondTrap) == &typeid(*this))
    ClapTrap::operator=(rhs);
  ScavTrap::operator=(rhs);
  FragTrap::operator=(rhs);
  return *this;
}

void DiamondTrap::whoAmI(void) {
  std::cout << "DiamondTrap " << _name << " say:" << std::endl;
  std::cout << ">> DiamondTrap name is " << _name << "." << std::endl;
  std::cout << ">> ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}
