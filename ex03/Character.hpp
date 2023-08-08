/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:43:06 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 18:28:27 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H

#define CHARACTER_H

#include "ICharacter.hpp"

class	Character : public ICharacter {
	private:
		std::string	name;
		AMateria	*inv[4];
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &object);
		Character	&operator=(const Character &object);
		~Character();
		
		std::string const	&getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif