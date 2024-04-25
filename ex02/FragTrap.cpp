/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:02:45 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 19:27:47 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
  std::cout << "FragTrap default constructor called " << _name << std::endl;
}

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap deconstructor called " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "FragTrap copy constructor called " << _name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  std::cout << "FragTrap assignation operator called " << _name << std::endl;
  ClapTrap::operator=(other);
  return *this;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << _name << " say:" << std::endl;
  std::cout << ">> Would you like to high-five me?" << std::endl;
}
