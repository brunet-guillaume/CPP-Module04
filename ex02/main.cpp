/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:18:10 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/22 10:01:29 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>

int	main(void) {
	std::cout << "\e[0;36m------------------- Test 1 -------------------\e[0m" << std::endl;
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
	std::cout << "\e[0;36m------------------- Test 2 -------------------\e[0m" << std::endl;
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
	std::cout << "\e[0;36m------------------- Test 3 -------------------\e[0m" << std::endl;
	{
		Dog	*doggy = new Dog;

		std::cout << "\e[0;32mdoggy : (type: " << doggy->getType() << ")" << std::endl;
		std::cout << "Setting ideas...\e[0m" << std::endl;
		doggy->setIdea(0, "I'm hungry...");
		doggy->setIdea(12, "Where is my bone ?");
		std::cout << "\e[0;32mdoggy : (type: " << doggy->getType() << ")\e[0m" << std::endl;
		doggy->printIdeas();
		Dog puppy = *doggy;
		std::cout << "\e[0;32mpuppy : (type: " << puppy.getType() << ")\e[0m" << std::endl;
		puppy.printIdeas();
		Dog pup(puppy);
		std::cout << "\e[0;32mpup : (type: " << pup.getType() << ")\e[0m" << std::endl;
		pup.printIdeas();
		std::cout << "\e[0;32mdoggy : (type: " << doggy->getType() << ")" << std::endl;
		std::cout << "Setting ideas...\e[0m" << std::endl;
		doggy->setIdea(0, "I'm not hungry anymore...");
		doggy->setIdea(12, "I juste found my bone !");
		std::cout << "\e[0;32mdoggy : (type: " << doggy->getType() << ")\e[0m" << std::endl;
		doggy->printIdeas();
		std::cout << "\e[0;32mpuppy : (type: " << puppy.getType() << ")\e[0m" << std::endl;
		puppy.printIdeas();
		std::cout << "\e[0;32mpup : (type: " << pup.getType() << ")\e[0m" << std::endl;
		pup.printIdeas();
		std::cout << "\e[0;32mpuppy : (type: " << puppy.getType() << ")" << std::endl;
		std::cout << "Setting ideas...\e[0m" << std::endl;
		puppy.setIdea(0, "I'm more hungry than ever !");
		puppy.setIdea(12, "Even if I ate my bone !");
		std::cout << "\e[0;32mdoggy : (type: " << doggy->getType() << ")\e[0m" << std::endl;
		doggy->printIdeas();
		std::cout << "\e[0;32mpuppy : (type: " << puppy.getType() << ")\e[0m" << std::endl;
		puppy.printIdeas();
		std::cout << "\e[0;32mpup : (type: " << pup.getType() << ")\e[0m" << std::endl;
		pup.printIdeas();
		delete doggy;
	}
	std::cout << "\e[0;36m------------------- Test 4 -------------------\e[0m" << std::endl;
	{
		Cat	*kitten = new Cat;

		std::cout << "\e[0;32mkitten : (type: " << kitten->getType() << ")" << std::endl;
		std::cout << "Setting ideas...\e[0m" << std::endl;
		kitten->setIdea(25, "I'm tired...");
		kitten->setIdea(13, "What the f*ck am I eating ? Is it my tail ?");
		std::cout << "\e[0;32mkitten : (type: " << kitten->getType() << ")\e[0m" << std::endl;
		kitten->printIdeas();
		Cat kitty = *kitten;
		std::cout << "\e[0;32mkitty : (type: " << kitty.getType() << ")\e[0m" << std::endl;
		kitty.printIdeas();
		Cat kits(kitty);
		std::cout << "\e[0;32mkits : (type: " << kits.getType() << ")\e[0m" << std::endl;
		kits.printIdeas();
		std::cout << "\e[0;32mkitty : (type: " << kitten->getType() << ")" << std::endl;
		std::cout << "Setting ideas...\e[0m" << std::endl;
		kitten->setIdea(25, "I'm tiiiiirrreeeeeeeeed...");
		kitten->setIdea(13, "I'm so stupid, this is my tail... I'm tired tho.");
		std::cout << "\e[0;32mkitten : (type: " << kitten->getType() << ")\e[0m" << std::endl;
		kitten->printIdeas();
		std::cout << "\e[0;32mkitty : (type: " << kitty.getType() << ")\e[0m" << std::endl;
		kitty.printIdeas();
		std::cout << "\e[0;32mkits : (type: " << kits.getType() << ")\e[0m" << std::endl;
		kits.printIdeas();
		std::cout << "\e[0;32mkitty : (type: " << kitty.getType() << ")" << std::endl;
		std::cout << "Setting ideas...\e[0m" << std::endl;
		kitty.setIdea(25, "I'm tir.. zzzZZZzzz");
		kitty.setIdea(13, "zzZZzzZZzzZZ");
		std::cout << "\e[0;32mkitten : (type: " << kitten->getType() << ")\e[0m" << std::endl;
		kitten->printIdeas();
		std::cout << "\e[0;32mpuppy : (type: " << kitty.getType() << ")\e[0m" << std::endl;
		kitty.printIdeas();
		std::cout << "\e[0;32mkits : (type: " << kits.getType() << ")\e[0m" << std::endl;
		kits.printIdeas();
		// kits has a brain with idea, if deep copy is 0k, there is no leaks.
		kits = kitty;
		delete kitten;
	}
	std::cout << "\e[0;36m------------------- Test 5 -------------------\e[0m" << std::endl;
	std::cout << "\e[0;36m- (you need to uncomment lines in main.cpp) --\e[0m" << std::endl;
	{
//		Animal *test = new Animal;

//		delete test;
	}
	return (0);
}
