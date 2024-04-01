/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:13:58 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 17:14:45 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	private:

	public:
		Cure();
		Cure(const std::string &type);
		Cure(const Cure &cpy);

		~Cure();

		Cure	&operator=(const Cure &rhs);

		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};

#endif
