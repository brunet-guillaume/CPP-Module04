/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:25:50 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/15 18:31:50 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		
		~MateriaSource();

		MateriaSource &operator=(const MateriaSource &rhs);
		
		void		learnMateria(AMateria*);
		AMateria	*createMateria(const std::string &type);
};

#endif
