/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:09:49 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 17:00:01 by gbrunet          ###   ########.fr       */
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

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
