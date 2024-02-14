/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:37:11 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 16:48:45 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	std::cout << "\e[0;35mCat: Default constructor called\e[0m" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat &cpy) {
	std::cout << "\e[0;35mCat: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

Cat::~Cat() {
	std::cout << "\e[0;35mCat: Destructor called\e[0m" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(const Cat &rhs) {
	std::cout << "\e[0;35mCat: Copy assignment operator called\e[0m" << std::endl;
	if (this == &rhs)
		return (*this);
	this->brain = rhs.brain;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow. Meeeeooooooooow." << std::endl;
}
