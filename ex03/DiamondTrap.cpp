/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:58:09 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 19:42:16 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_trap", FragTrap::default_hit_points,
               ScavTrap::default_energy_points,
               FragTrap::default_attack_damage),
      _name(name) {
  std::cout << "DiamondTrap default constructor called " << _name << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "DiamondTrap deconstructor called " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
  std::cout << "DiamondTrap copy constructor called " << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  std::cout << "DiamondTrap assignation operator called " << _name << std::endl;
  ClapTrap::operator=(other);
  ScavTrap::operator=(other);
  FragTrap::operator=(other);
  return *this;
}

void DiamondTrap::whoAmI(void) {
  std::cout << "DiamondTrap " << _name << " say:" << std::endl;
  std::cout << ">> DiamondTrap name is " << _name << "." << std::endl;
  std::cout << ">> ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
  return ScavTrap::attack(target);
}