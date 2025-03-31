/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:02:45 by hshimizu          #+#    #+#             */
/*   Updated: 2025/03/31 21:54:59 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

unsigned int const FragTrap::default_hit_points = 100;
unsigned int const FragTrap::default_energy_points = 100;
unsigned int const FragTrap::default_attack_damage = 30;

FragTrap::FragTrap(std::string const &name)
    : ClapTrap(name, default_hit_points, default_energy_points,
               default_attack_damage) {
  std::cout << "FragTrap default constructor called " << _name << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap deconstructor called " << _name << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs) {
  std::cout << "FragTrap copy constructor called " << _name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
  std::cout << "FragTrap assignation operator called " << _name << std::endl;
  if (&typeid(FragTrap) == &typeid(*this))
    ClapTrap::operator=(rhs);
  return *this;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << _name << " say:" << std::endl;
  std::cout << ">> Would you like to high-five me?" << std::endl;
}
