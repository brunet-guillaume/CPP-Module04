/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:42:29 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 16:48:54 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(): type("") {
	std::cout << "\e[0;35mAMateria: Default constructor called\e[0m" << std::endl;
}

AMateria::AMateria(std::string const &type): type(type) {
	std::cout << "\e[0;35mAMateria: Default constructor with type " << type << " called\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &cpy) {
	std::cout << "\e[0;35mAMateria: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

AMateria::~AMateria() {
	std::cout << "\e[0;35mAMateria: Destructor called\e[0m" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &rhs) {
	std::cout << "\e[0;35mAMateria: Copy assignment operator called\e[0m" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

std::string const	&AMateria::getType() const {
	return (this->type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "\e[0;32m* " << this->type << " used on " << target.getName() << " *\e[0m" << std::endl;
}
