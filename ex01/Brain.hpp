/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:34:17 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/14 16:38:54 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &cpy);

		~Brain();

		Brain	&operator=(const Brain &rhs);
};

#endif
