/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 05:51:54 by hshimizu          #+#    #+#             */
/*   Updated: 2025/01/10 20:14:10 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <string>

class ClapTrap {
private:
  std::string _name;
  unsigned int _hit_points;
  unsigned int _energy_points;
  unsigned int _attack_damage;

  ClapTrap(std::string const &name, unsigned int hit_points,
           unsigned int energy_points, unsigned int attack_damage);

public:
  static unsigned int const default_hit_points;
  static unsigned int const default_energy_points;
  static unsigned int const default_attack_damage;

  ClapTrap(std::string const &name = "");
  ~ClapTrap();
  ClapTrap(ClapTrap const &rhs);
  ClapTrap &operator=(ClapTrap const &rhs);

  void attack(std::string const &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
