/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:36:35 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 14:20:27 by gbrunet          ###   ########.fr       */
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
	if (this == &rhs)
		return (*this);
	for (unsigned int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(unsigned int i, std::string str) {
	if (i >= 100)
		std::cerr << "A brain as a maximum ideas of 100 (index 99)." << std::endl;
	else
		this->ideas[i] = str;
}

void	Brain::printIdeas() {
	std::cout << "Ideas :" << std::endl;
	for (unsigned int i = 0; i < 100; i++) {
		if (!this->ideas[i].empty())
			std::cout << "idea " << i << ": " << this->ideas[i] << std::endl;
	}
}
