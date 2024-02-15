/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:37:03 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 18:25:24 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

int	main(void) {
	AMateria *ice = new Ice("ice");
	AMateria *cure = new Cure("cure");

	Character a_guy("Guy 1");
	Character an_other_guy("Guy 2");

	a_guy.equip(ice);
	a_guy.equip(cure);
	a_guy.equip(cure);
	a_guy.equip(cure);
	a_guy.equip(cure);
	a_guy.use(0, an_other_guy);
	a_guy.use(1, an_other_guy);
	a_guy.use(2, an_other_guy);
	a_guy.use(6, an_other_guy);

	delete ice;
	delete cure;
	return (0);
}
