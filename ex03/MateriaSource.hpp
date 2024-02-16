/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:25:50 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/16 10:26:02 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria	*saved_materias[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		
		~MateriaSource();

		MateriaSource &operator=(const MateriaSource &rhs);
		
		void		learnMateria(AMateria*);
		AMateria	*createMateria(const std::string &type);
};

#endif
