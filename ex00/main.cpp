/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:18:10 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 16:23:17 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>

int	main(void) {
	Animal 		*no_one = new Animal;
	Animal 		*doggy = new Dog;
	Animal 		*kitten = new Cat;
	WrongAnimal	*bad_kitten = new WrongCat;
	WrongAnimal	*bad_animal = new WrongAnimal;

	std::cout << "\e[0;32mno_one : (type: " << no_one->getType() << ")\e[0m" << std::endl;
	no_one->makeSound();
	std::cout << "\e[0;32mdoggy : (type: " << doggy->getType() << ")\e[0m" << std::endl;
	doggy->makeSound();
	std::cout << "\e[0;32mkitten : (type: " << kitten->getType() << ")\e[0m" << std::endl;
	kitten->makeSound();
	std::cout << "\e[0;32mbad_kitten : (type: " << bad_kitten->getType() << ")\e[0m" << std::endl;
	bad_kitten->makeSound();
	std::cout << "\e[0;32mbad_animal : (type: " << bad_animal->getType() << ")\e[0m" << std::endl;
	bad_kitten->makeSound();
	delete bad_animal;
	delete bad_kitten;
	delete kitten;
	delete doggy;
	delete no_one;
	return (0);
}
