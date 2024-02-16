/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:32:39 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/16 11:28:21 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	std::cout << "\e[0;35mMateriaSource: Default constructor called\e[0m" << std::endl;
	for (unsigned int i = 0; i < 4; i++) {
		this->saved_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &cpy) {
	std::cout << "\e[0;35mMateriaSource: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

MateriaSource::~MateriaSource() {
	std::cout << "\e[0;35mMateriaSource: Destructor called\e[0m" << std::endl;
	for (unsigned int i = 0; i < 4; i++) {
		if(this->saved_materias[i])
			delete this->saved_materias[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs) {
	std::cout << "\e[0;35mMateriaSource: Copy assignment operator called\e[0m" << std::endl;
	if (this == &rhs)
		return (*this);
	for (unsigned int i = 0; i < 4; i++)
		this->saved_materias[i] = rhs.saved_materias[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (unsigned int i = 0; i < 4; i++) {
		if (!this->saved_materias[i]) {
			this->saved_materias[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type) {
	AMateria	*new_materia;

	for (unsigned int i = 0; i < 4; i++) {
		if (this->saved_materias[i] && this->saved_materias[i]->getType() == type) {
			new_materia = this->saved_materias[i]->clone();
			return (new_materia);
		}
	}
	return (NULL);
}
