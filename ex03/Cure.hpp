/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:11:19 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 18:38:48 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H

#define CURE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure : public AMateria {
	public:
		Cure();
		Cure(std::string const &type);
		Cure(Cure const &object);
		Cure	&operator=(Cure const &object);
		~Cure();
		
		
		Cure	*clone() const;
		void	use(ICharacter &target);
};

#endif