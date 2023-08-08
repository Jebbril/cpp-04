/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:36:48 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 18:35:45 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H

#define AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class	AMateria {
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &object);
		AMateria	&operator=(AMateria const &object);
		virtual	~AMateria();
		
		std::string const	&getType() const;
		
		virtual AMateria	*clone() const = 0;
		virtual void	use(ICharacter &target);
};

#endif