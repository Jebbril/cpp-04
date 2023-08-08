/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:11:12 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 18:31:13 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H

#define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria {
	public:
		Ice();
		Ice(std::string const &type);
		Ice(Ice const &object);
		Ice	&operator=(Ice const &object);
		~Ice();
		
		
		Ice	*clone() const;
		void	use(ICharacter &target);
};

#endif