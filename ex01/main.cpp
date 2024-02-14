/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:18:10 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 17:36:41 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>

int	main(void) {
	{
		const Animal	*doggy = new Dog;
		const Animal	*kitten = new Cat;
	
		std::cout << "\e[0;32mdoggy : (type: " << doggy->getType() << ")\e[0m" << std::endl;
		doggy->makeSound();
		std::cout << "\e[0;32mkitten : (type: " << kitten->getType() << ")\e[0m" << std::endl;
		kitten->makeSound();
		delete kitten;
		delete doggy;
	}
	{
		Animal	*animals[10];
		
		for (int i = 0; i < 10; i++) {
			if (i < 5)
				animals[i] = new Cat;
			else
				animals[i] = new Dog;
		}
		for (int i = 0; i < 10; i++) {
			std::cout << "animals[" << i << "] is of type : " << animals[i]->getType() << std::endl;
			animals[i]->makeSound();
		}
		for (int i = 0; i < 10; i++) {
			delete animals[i];
		}
	}
	{

	}
	return (0);
}
