/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:52:57 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 19:34:45 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H

#define ANIMAL_H

#include <iostream>
#include <string>

class	Animal {
	protected:
		std::string	type;
	public:
	Animal();
	Animal(const Animal &object);
	Animal	&operator=(const Animal &object);
	virtual ~Animal();
	virtual void	makeSound() const = 0;
	std::string	getType(void) const;
};

#endif