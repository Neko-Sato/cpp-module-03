/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:45:22 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 19:31:23 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name, 100, 50, 20), _gatekeeper_mode(false) {
  std::cout << "ScavTrap default constructor called " << _name << std::endl;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap deconstructor called " << _name << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other)
    : ClapTrap(other), _gatekeeper_mode(other._gatekeeper_mode) {
  std::cout << "ScavTrap copy constructor called " << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  std::cout << "ScavTrap assignation operator called " << _name << std::endl;
  ClapTrap::operator=(other);
  _gatekeeper_mode = other._gatekeeper_mode;
  return *this;
}

void ScavTrap::attack(const std::string &target) {
  std::cout << "ScavTrap " << _name << " ";
  if (!_hit_points)
    std::cout << "already dead...";
  else if (!_energy_points)
    std::cout << "no more energy points...";
  else {
    std::cout << "attacks " << target << ", ";
    std::cout << "causing " << _attack_damage << " points of damage!";
    _energy_points--;
  }
  std::cout << std::endl;
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap " << _name << " ";
  if (_gatekeeper_mode)
    std::cout << "already in gatekeeper mode.";
  else
    std::cout << "went into gatekeeper mode.";
  _gatekeeper_mode = true;
  std::cout << std::endl;
}
