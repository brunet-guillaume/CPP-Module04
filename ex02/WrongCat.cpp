/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:37:11 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 16:19:06 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "\e[0;35mWrongCat: Default constructor called\e[0m" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cpy) {
	std::cout << "\e[0;35mCat: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat() {
	std::cout << "\e[0;35mWrongCat: Destructor calledi\e[0m" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs) {
	std::cout << "\e[0;35mWrongCat: Copy assignment operator called\e[0m" << std::endl;
	(void)rhs;
	return (*this);
}

void	WrongCat::makeSound(void) {
	std::cout << "Meow. Meeeeooooooooow." << std::endl;
}
