/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:45:22 by hshimizu          #+#    #+#             */
/*   Updated: 2025/03/31 21:51:41 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

unsigned int const ScavTrap::default_hit_points = 100;
unsigned int const ScavTrap::default_energy_points = 50;
unsigned int const ScavTrap::default_attack_damage = 20;

ScavTrap::ScavTrap(std::string const &name)
    : ClapTrap(name, default_hit_points, default_energy_points,
               default_attack_damage),
      _gatekeeper_mode(false) {
  std::cout << "ScavTrap default constructor called " << _name << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap deconstructor called " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
    : ClapTrap(rhs), _gatekeeper_mode(rhs._gatekeeper_mode) {
  std::cout << "ScavTrap copy constructor called " << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
  std::cout << "ScavTrap assignation operator called " << _name << std::endl;
  if (&typeid(ScavTrap) == &typeid(rhs))
    ClapTrap::operator=(rhs);
  if (this != &rhs) {
    _gatekeeper_mode = rhs._gatekeeper_mode;
  }
  return *this;
}

void ScavTrap::attack(std::string const &target) {
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
