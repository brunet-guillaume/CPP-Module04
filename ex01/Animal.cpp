/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:13:08 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 17:33:25 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal() {
	std::cout << "\e[0;35mAnimal: Default constructor called\e[0m" << std::endl;
}

Animal::Animal(const Animal &cpy) {
	std::cout << "\e[0;35mAnimal: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

Animal::~Animal() {
	std::cout << "\e[0;35mAnimal: Destructor called\e[0m" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
	std::cout << "\e[0;35mAnimal: Copy assignment operator called\e[0m" << std::endl;
	(void)rhs;
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "I'm no one, I don't make sound." << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->type);
}
(
Animal* titi = new Dog);
Animal* toto = titi;

