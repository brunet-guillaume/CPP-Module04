/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:22:03 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 15:42:15 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	type;
			
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &cpy);

		virtual ~AMateria();

		AMateria	&operator=(const AMateria &rhs);

		std::string const &getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
