/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:56:28 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 18:21:10 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(): name("default_name") {
	std::cout << "\e[0;35mCharacter: Default constructor called\e[0m" << std::endl;	
}

Character::Character(std::string name): name(name) {
	std::cout << "\e[0;35mCharacter: Default constructor with name " << name << " called\e[0m" << std::endl;	
}

Character::Character(const Character &cpy) {
	std::cout << "\e[0;35mCharacter: Copy constructor called\e[0m" << std::endl;
	*this = cpy;
}

Character::~Character() {
	std::cout << "\e[0;35mCharacter: Destructor called\e[0m" << std::endl;
}

Character	&Character::operator=(const Character &rhs) {
	std::cout << "\e[0;35mCharacter: Copy assignment operator called\e[0m" << std::endl;
	(void)rhs;
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
	(void)idx;
}

void	Character::use(int idx, ICharacter &target) {
	if (this->inventory[idx] && idx >= 0 && idx < 4)
		this->inventory[idx]->use(target);
//	else if (idx >= 0 && idx < 4)
//		std::cout << "This inventory slot is empty" << std::endl;
//	else
//		std::cerr << "Character inventory is 4 slots max (idx >= 0 && idx < 4)" << std::endl;
}
