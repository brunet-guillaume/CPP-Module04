/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:15:13 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 18:32:06 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() {
	std::cout << "\e[0;35mCure: Default constructor called\e[0m" << std::endl;
	this->type = "cure";
}

Cure::Cure(const std::string &type) {
	std::cout << "\e[0;35mCure: Default constructor with type " << type << " called\e[0m" << std::endl;	
	this->type = type;
}

Cure::Cure(const Cure &cpy) {
	std::cout << "\e[0;35mCure: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

Cure::~Cure() {
	std::cout << "\e[0;35mCure: Destructor called\e[0m" << std::endl;
}

Cure	&Cure::operator=(const Cure &rhs) {
	std::cout << "\e[0;35mCure: Copy assignment operator called\e[0m" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

AMateria	*Cure::clone() const {
	std::cout << "\e[0;35mCure: Cloning Materia\e[0m" << std::endl;	
	AMateria	*clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter &target) {
	std::cout << "\e[0;32m* heals " << target.getName() << "'s wounds *\e[0m" << std::endl;
}
