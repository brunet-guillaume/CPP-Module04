/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:36:35 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 16:42:30 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "\e[0;35mBrain: Default constructor called\e[0m" << std::endl;
}

Brain::Brain(const Brain &cpy) {
	std::cout << "\e[0;35mBrain: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

Brain::~Brain() {
	std::cout << "\e[0;35mBrain: Destructor called\e[0m" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs) {
	std::cout << "\e[0;35mBrain: Copy assignment operator called\e[0m" << std::endl;
	(void)rhs;
	return (*this);
}
