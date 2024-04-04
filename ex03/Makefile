# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/04/04 06:52:49 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= DiamondTrap

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -g
CXXFLAGS	+= -std=c++98 -pedantic

SRCS		= main.cpp
SRCS		+= ClapTrap.cpp
SRCS		+= ScavTrap.cpp
SRCS		+= FragTrap.cpp
SRCS		+= DiamondTrap.cpp

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean
clean: $(NAME)
	rm -f $^
