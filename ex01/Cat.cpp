/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:37:11 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/21 17:13:55 by gbrunet          ###   ########.fr       */
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
	// ici c'est pas bon. (au dessus je veux dire). car si tu duplique le meme
	// truc, il ne va pas dup les brains.
	// you need to correct this
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow. Meeeeooooooooow." << std::endl;
}

void	Cat::setIdea(unsigned int i, std::string str) {
	this->brain->setIdea(i, str);
}

void	Cat::printIdeas(void) const {
	this->brain->printIdeas();
}
