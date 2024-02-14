/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:37:11 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 16:20:14 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "\e[0;35mDog: Default constructor called\e[0m" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &cpy) {
	std::cout << "\e[0;35mDog: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

Dog::~Dog() {
	std::cout << "\e[0;35mDog: Destructor called\e[0m" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs) {
	std::cout << "\e[0;35mDog: Copy assignment operator called\e[0m" << std::endl;
	(void)rhs;
	return (*this);
}

void	Dog::makeSound(void) {
	std::cout << "Woof. Woof, woof." << std::endl;
}
