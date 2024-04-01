/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:09:49 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 16:21:05 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal &cpy);
		
		virtual ~Animal();

		Animal	&operator=(const Animal &rhs);

		virtual void	makeSound(void);
		std::string		getType(void);
};

#endif
