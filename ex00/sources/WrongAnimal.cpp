/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:13:08 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 16:13:10 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "\e[0;35mWrongAnimal: Default constructor called\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
	std::cout << "\e[0;35mWrongAnimal: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "\e[0;35mWrongAnimal: Destructor called\e[0m" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "\e[0;35mWrongAnimal: Copy assignment operator called\e[0m" << std::endl;
	(void)rhs;
	return (*this);
}

void	WrongAnimal::makeSound(void) {
	std::cout << "I'm no one, I don't make sound." << std::endl;
}

std::string	WrongAnimal::getType(void) {
	return (this->type);
}
