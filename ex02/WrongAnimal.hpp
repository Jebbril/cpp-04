/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:54:51 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 14:54:14 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H

#define WRONGANIMAL_H

#include <iostream>
#include <string>

class	WrongAnimal {
	protected:
		std::string	type;
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &object);
	WrongAnimal	&operator=(const WrongAnimal &object);
	virtual	~WrongAnimal();
	void	makeSound() const;
	std::string	getType(void) const;
};

#endif