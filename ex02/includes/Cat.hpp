/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:31:14 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 14:09:59 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(const Cat &cpy);
		~Cat();

		Cat	&operator=(const Cat &rhs);

		void	makeSound(void) const;
		void	setIdea(unsigned int i, std::string str);
		void	printIdeas(void) const;
};

#endif
