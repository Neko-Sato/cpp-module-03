/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 05:51:58 by hshimizu          #+#    #+#             */
/*   Updated: 2025/01/10 20:14:10 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

unsigned int const ClapTrap::default_hit_points = 10;
unsigned int const ClapTrap::default_energy_points = 10;
unsigned int const ClapTrap::default_attack_damage = 0;

ClapTrap::ClapTrap(std::string const &name, unsigned int hit_points,
                   unsigned int energy_points, unsigned int attack_damage)
    : _name(name), _hit_points(hit_points), _energy_points(energy_points),
      _attack_damage(attack_damage) {
  std::cout << "ClapTrap protected constructor called " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string const &name)
    : _name(name), _hit_points(default_hit_points),
      _energy_points(default_energy_points),
      _attack_damage(default_attack_damage) {
  std::cout << "ClapTrap default constructor called " << _name << std::endl;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "ClapTrap deconstructor called " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
    : _name(rhs._name), _hit_points(rhs._hit_points),
      _energy_points(rhs._energy_points), _attack_damage(rhs._attack_damage) {
  std::cout << "ClapTrap copy constructor called " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
  std::cout << "ClapTrap assignation operator called " << _name << std::endl;
  if (this != &rhs) {
    _name = rhs._name;
    _hit_points = rhs._hit_points;
    _energy_points = rhs._energy_points;
    _attack_damage = rhs._attack_damage;
  }
  return *this;
}

void ClapTrap::attack(std::string const &target) {
  std::cout << "ClapTrap " << _name << " ";
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

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << _name << " ";
  if (!_hit_points)
    std::cout << "already dead...";
  else {
    std::cout << "takes " << amount << " damage";
    if (amount < _hit_points) {
      std::cout << ".";
      _hit_points -= amount;
    } else {
      std::cout << ", and died...";
      _hit_points = 0;
    }
  }
  std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "ClapTrap " << _name << " ";
  if (!_hit_points)
    std::cout << "already dead...";
  else if (!_energy_points)
    std::cout << "no more energy points...";
  else {
    std::cout << "repaired " << amount << " of hit points!";
    _hit_points += amount;
  }
  std::cout << std::endl;
}
