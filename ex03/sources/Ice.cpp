/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:32:26 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/16 10:38:55 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() {
	std::cout << "\e[0;35mIce: Default constructor called\e[0m" << std::endl;
	this->type = "ice";
}

Ice::Ice(const std::string &type) {
	std::cout << "\e[0;35mIce: Default constructor with type " << type << " called\e[0m" << std::endl;	
	this->type = type;
}

Ice::Ice(const Ice &cpy) {
	std::cout << "\e[0;35mIce: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

Ice::~Ice() {
	std::cout << "\e[0;35mIce: Destructor called\e[0m" << std::endl;
}

Ice	&Ice::operator=(const Ice &rhs) {
	std::cout << "\e[0;35mIce: Copy assignment operator called\e[0m" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

AMateria	*Ice::clone() const {
	std::cout << "\e[0;35mIce: Cloning Materia\e[0m" << std::endl;	
	AMateria	*clone = new Ice(*this);
	return (clone);
}

void	Ice::use(ICharacter &target) {
	std::cout << "\e[0;32m* shoots an ice bolt at " << target.getName() << " *\e[0m" << std::endl;
}
