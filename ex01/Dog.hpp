/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:31:14 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 16:48:24 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();

		Dog	&operator=(const Dog &rhs);

		void		makeSound(void) const;
};

#endif
