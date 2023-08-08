/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:44:36 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 18:10:26 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H

#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {
	private:
		AMateria	*inv[4];
		std::string	types[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &object);
		MateriaSource	&operator=(const MateriaSource &object);
		~MateriaSource();
		
		void	learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif