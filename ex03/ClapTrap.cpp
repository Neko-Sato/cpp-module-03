/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 05:51:58 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 19:32:11 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(std::string name, unsigned int hit_points,
                   unsigned int energy_points, unsigned int attack_damage)
    : _name(name),
      _hit_points(hit_points),
      _energy_points(energy_points),
      _attack_damage(attack_damage)

{
  std::cout << "ClapTrap protected constructor called " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name),
      _hit_points(10),
      _energy_points(10),
      _attack_damage(0)

{
  std::cout << "ClapTrap default constructor called " << _name << std::endl;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "ClapTrap deconstructor called " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : _name(other._name),
      _hit_points(other._hit_points),
      _energy_points(other._energy_points),
      _attack_damage(other._attack_damage) {
  std::cout << "ClapTrap copy constructor called " << _name << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "ClapTrap assignation operator called " << _name << std::endl;
  _name = other._name;
  _hit_points = other._hit_points;
  _energy_points = other._energy_points;
  _attack_damage = other._attack_damage;
  return *this;
}

void ClapTrap::attack(const std::string &target) {
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
