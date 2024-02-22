/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:37:11 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/22 09:57:03 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "\e[0;35mDog: Default constructor called\e[0m" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog &cpy) {
	std::cout << "\e[0;35mDog: Copy constructor called\e[0m" << std::endl;
	this->brain = NULL;
	*this = cpy;
}

Dog::~Dog() {
	std::cout << "\e[0;35mDog: Destructor called\e[0m" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(const Dog &rhs) {
	std::cout << "\e[0;35mDog: Copy assignment operator called\e[0m" << std::endl;
	if (this->brain)
		delete this->brain;
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof. Woof, woof." << std::endl;
}

void	Dog::setIdea(unsigned int i, std::string str) {
	this->brain->setIdea(i, str);
}

void	Dog::printIdeas(void) const {
	this->brain->printIdeas();
}
