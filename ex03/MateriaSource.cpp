/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:32:39 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 18:36:23 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "\e[0;35mMateriaSource: Default constructor called\e[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &cpy) {
	std::cout << "\e[0;35mMateriaSource: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

MateriaSource::~MateriaSource() {
	std::cout << "\e[0;35mMateriaSource: Destructor called\e[0m" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs) {
	std::cout << "\e[0;35mMateriaSource: Copy assignment operator called\e[0m" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {
	
}

AMateria	*MateriaSource::createMateria(const std::string &type) {
	AMateria	*new_materia;

	return (new_materia);
}
