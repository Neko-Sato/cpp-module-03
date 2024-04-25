/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:22:13 by hshimizu          #+#    #+#             */
/*   Updated: 2024/04/25 19:31:27 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 private:
  bool _gatekeeper_mode;

 public:
  ScavTrap(std::string name = "");
  ~ScavTrap(void);
  ScavTrap(const ScavTrap& other);
  ScavTrap& operator=(const ScavTrap& other);

  void attack(const std::string& target);
  void guardGate(void);
};

#endif
