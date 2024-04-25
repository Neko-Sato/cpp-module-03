/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:01:41 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 19:36:21 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include <string>

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
  static const unsigned int default_hit_points = 100;
  static const unsigned int default_energy_points = 100;
  static const unsigned int default_attack_damage = 30;

  FragTrap(std::string name = "");
  virtual ~FragTrap(void);
  FragTrap(const FragTrap& other);
  virtual FragTrap& operator=(const FragTrap& other);

  void highFivesGuys(void);
};

#endif
