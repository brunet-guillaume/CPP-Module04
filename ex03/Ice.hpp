/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:27:59 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 16:50:37 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	private:

	public:
		Ice();
		Ice(const std::string &type);
		Ice(const Ice &cpy);

		~Ice();

		Ice	&operator=(const Ice &rhs);

		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};

#endif
