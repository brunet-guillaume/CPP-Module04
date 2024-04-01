/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:56:28 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/22 09:47:17 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(): name("default_name") {
	std::cout << "\e[0;35mCharacter: Default constructor called\e[0m" << std::endl;	
	for (unsigned int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

Character::Character(std::string name): name(name) {
	std::cout << "\e[0;35mCharacter: Default constructor with name " << name << " called\e[0m" << std::endl;	
	for (unsigned int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character &cpy) {
	std::cout << "\e[0;35mCharacter: Copy constructor called\e[0m" << std::endl;
	for (unsigned int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	*this = cpy;
}

Character::~Character() {
	std::cout << "\e[0;35mCharacter: Destructor called\e[0m" << std::endl;
	for (unsigned int i = 0; i < 4; i++) {
		if(this->inventory[i])
			delete this->inventory[i];
	}
}

Character	&Character::operator=(const Character &rhs) {
	std::cout << "\e[0;35mCharacter: Copy assignment operator called\e[0m" << std::endl;
	for (unsigned int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = NULL;
		if (rhs.inventory[i]) {
			this->inventory[i] = rhs.inventory[i]->clone();
		}
	}
	return (*this);
}

const std::string	&Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	bool	already_equiped = false;

	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] && this->inventory[i] == m) {
			already_equiped = true;
			break ;
		}
	}
	if (already_equiped)
		return ;
	for (int i = 0; i < 4; i++) {
		if (!this->inventory[i]) {
			this->inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
//	else if (idx >= 0 && idx < 4)
//		std::cout << "This inventory slot is empty" << std::endl;
//	else
//		std::cerr << "Character inventory is 4 slots max (idx >= 0 && idx < 4)" << std::endl;
}

AMateria	*Character::saveMateria(int idx) {
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		return (this->inventory[idx]);
	return (NULL);
}
